all: arrays0 arrays0-sln arrays1 arrays1-sln ascii ascii-sln scope

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
	
args0:
	g++ -o args0 args0.c -Wall
	
args0-sln:
	g++ -o args0-sln args0-sln.c -Wall
	
args1:
	g++ -o args1 args1.c -Wall
	
args1-sln:
	g++ -o args1-sln args1-sln.c -Wall
	
scope:
	g++ -o scope scope.c -Wall

clean:
	rm -f *.o a.out core arrays0 arrays0-sln arrays1 arrays1-sln ascii ascii-sln args0 args0-sln args1 args1-sln scope