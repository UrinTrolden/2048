2048: 2048.o zero_trim.o tile_merge.o
	gcc -o 2048 2048.o zero_trim.o tile_merge.o -g -O2 -std=gnu11 -static -lm

2048.o: 2048.c 2048.h zero_trim.h tile_merge.h 
	gcc -c 2048.c

zero_trim.o: zero_trim.c zero_trim.h
	gcc -c zero_trim.c

tile_merge.o: tile_merge.c tile_merge.h 
	gcc -c tile_merge.c