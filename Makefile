cc = gcc

.PHONY: run format clean

run:
	$(cc) main.c -o main
	./main

format:
	clang-format -i *.c *.h

clean:
	-rm main
