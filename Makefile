all: build/bmpll

build/bmpll: build/main.o
	g++ build/main.o -o build/bmpll

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o

build:
	mkdir -p build

clean:
	rm -r build
