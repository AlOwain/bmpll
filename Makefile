all: build/bmpll

build/bmpll: build/main.o build/bmp.o build/color.o build/rules.o  
	g++ build/main.o build/area.o build/bmp.o build/bmp_read.o build/color.o build/rules.o  -o build/bmpll

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o

build/area.o: src/rules/area.cpp
	g++ -c src/rules/area.cpp -o build/area.o

build/bmp.o: src/bmp/bmp.cpp build/bmp_read.o
	g++ -c src/bmp/bmp.cpp -o build/bmp.o

build/bmp_read.o: src/bmp/bmp_read.cpp
	g++ -c src/bmp/bmp_read.cpp -o build/bmp_read.o

build/color.o: src/color/color.cpp
	g++ -c src/color/color.cpp -o build/color.o

build/rules.o: src/rules/rules.cpp build/area.o
	g++ -c src/rules/rules.cpp -o build/rules.o

build:
	mkdir -p build

clean:
	rm -r build
