# Zum Kompilieren von rechner.c
all:rechner32.o rechner32 rechner64.o rechner64 
rechner32.o:./src/rechner.c
	gcc -m32 -c -o ./obj/rechner32.o ./src/rechner.c -Wall -pedantic -std=c11 -lm

rechner32:./obj/rechner32.o
	gcc -m32 -o ./bin/rechner32 ./obj/rechner32.o -lm

	chmod +x ./bin/rechner32

rechner64.o:./src/rechner.c
	gcc -m64 -c -o ./obj/rechner64.o ./src/rechner.c -Wall -pedantic -std=c11 -lm

rechner64:./obj/rechner64.o
	gcc -m64 -o ./bin/rechner64 ./obj/rechner64.o -lm

	chmod +x ./bin/rechner64
