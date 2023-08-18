2048: 2048.o zero_trim.o
	gcc -o 2048 2048.o zero_trim.o -g -O2 -std=gnu11 -static -lm

2048.o: 2048.c 2048.h zero_trim.h
	gcc -c 2048.c

zero_trim.o: zero_trim.c zero_trim.h
	gcc -c zero_trim.c