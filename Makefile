cc = gcc

.PHONY: run clean

run:
	$(cc) main.c -o main
	./main

