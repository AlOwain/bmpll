all: build/bmpll

build/bmpll: build/main.o build/rules.o  
	g++ build/main.o build/area.o build/rules.o -L. lib/lib_bmp.a -o build/bmpll

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o

build/area.o: src/rules/area.cpp
	g++ -c src/rules/area.cpp -o build/area.o

build/rules.o: src/rules/rules.cpp build/area.o
	g++ -c src/rules/rules.cpp -o build/rules.o

build:
	mkdir -p build

clean:
	rm -r build
