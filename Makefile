all: build/bmpll

build/bmpll: build/main.o build/rules.o build/area.o build/bmp.o
	g++ build/main.o build/rules.o build/area.o build/bmp.o build/bmp_read.o -o build/bmpll

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o

build/rules.o: src/rules/rules.cpp build/area.o
	g++ -c src/rules/rules.cpp -o build/rules.o

build/area.o: src/rules/area.cpp
	g++ -c src/rules/area.cpp -o build/area.o

build/bmp.o: src/bmp/bmp.cpp build/bmp_read.o
	g++ -c src/bmp/bmp.cpp -o build/bmp.o

build/bmp_read.o: src/bmp/bmp_read.cpp
	g++ -c src/bmp/bmp_read.cpp -o build/bmp_read.o

build:
	mkdir -p build

clean:
	rm -r build
