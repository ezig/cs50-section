all: arrays0 arrays0-sln arrays1 arrays1-sln ascii ascii-sln

arrays0:
	g++ -o arrays0 arrays0.c -Wall

arrays0-sln:
	g++ -o arrays0-sln arrays0-sln.c -Wall

arrays1:
	g++ -o arrays1 arrays1.c -Wno-write-strings -Wall

arrays1-sln:
	g++ -o arrays1-sln arrays1-sln.c -Wno-write-strings -Wall
	
ascii:
	g++ -o ascii ascii.c -Wall
	
ascii-sln:
	g++ -o ascii-sln ascii-sln.c -Wall

clean:
	rm -f *.o a.out core arrays0 arrays0-sln arrays1 arrays1-sln ascii ascii-sln