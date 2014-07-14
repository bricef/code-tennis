
all: build/GOL

build/GOL: build GameOfLife.c
	gcc -pedantic -std=c11 -Wall -Werror GameOfLife.c -o $@

build:
	mkdir build

clean:
	rm -rf build

.PHONY: clean
	
	
