all: clean build

build:
	gcc src/main.c -o main

clean:
	rm -rf main 2>/dev/null
