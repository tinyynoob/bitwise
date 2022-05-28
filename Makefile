cc = gcc

.PHONY: run run2 test format clean

run: main
	./$<

run2: main2
	./$<

test: _test
	./$<

main: main.c *.h
	$(cc) -o $@ $<

main2: main2.c *.h
	$(cc) -o $@ $<

_test: test.c *.h
	$(cc) -o $@ $<

format: *.c *.h
	clang-format -i $^

clean:
	-rm main
	-rm main2
	-rm _test
