all: build/bmpll

build/bmpll: build/main.o build/rule_setter.o build/area.o
	g++ build/main.o build/rule_setter.o build/area.o -o build/bmpll

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o

build/rule_setter.o: src/rule_setter.cpp
	g++ -c src/rule_setter.cpp -o build/rule_setter.o

build/area.o: src/area.cpp
	g++ -c src/area.cpp -o build/area.o

build:
	mkdir -p build

clean:
	rm -r build
