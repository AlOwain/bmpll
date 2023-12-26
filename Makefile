all: build/bmpll

build/bmpll: build/main.o build/rule_setter.o build/area.o build/bmp.o
	g++ build/main.o build/rule_setter.o build/area.o build/bmp.o build/bmp_read.o -o build/bmpll

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o

build/rule_setter.o: src/rule_setter.cpp build/area.o
	g++ -c src/rule_setter.cpp -o build/rule_setter.o

build/area.o: src/area.cpp
	g++ -c src/area.cpp -o build/area.o

build/bmp.o: src/bmp/bmp.cpp build/bmp_read.o
	g++ -c src/bmp/bmp.cpp -o build/bmp.o

build/bmp_read.o: src/bmp/bmp_read.cpp
	g++ -c src/bmp/bmp_read.cpp -o build/bmp_read.o

build:
	mkdir -p build

clean:
	rm -r build
