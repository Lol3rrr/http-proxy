build:
	gcc -O3 -o proxy.out src/main.c src/headerFiles/** src/**/**

test:
	make build
	./proxy.out
