all: build/bmpll

build/bmpll: build/main.o build/rule_settor.o
	g++ build/main.o build/rule_settor.o -o build/bmpll

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o

build/rule_settor.o: src/rule_settor.cpp | build
	g++ -c src/rule_settor.cpp -o build/rule_settor.o

build:
	mkdir -p build

clean:
	rm -r build
