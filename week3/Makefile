CC = gcc

CFLAGS  = -g -Wall

all: arrays0 arrays0-sln arrays1 arrays1-sln

arrays0:
	g++ -o arrays0 arrays0.c

arrays0-sln:
	g++ -o arrays0-sln arrays0-sln.c

arrays1:
	g++ -o arrays1 arrays1.c -Wno-write-strings

arrays1-sln:
	g++ -o arrays1-sln arrays1-sln.c -Wno-write-strings

clean:
	rm -f *.o a.out core arrays0 arrays0-sln arrays1 arrays1-sln