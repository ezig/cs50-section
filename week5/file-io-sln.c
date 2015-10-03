/*
* file-io.c
* Ezra Zigmond
* CS50 week5
*
* Goal: Understand file i/o. Copy a file one byte at a time
*/

 #include <stdio.h>

int main(int argc, char* argv[])
{
 	// ensure correct usage
 	if (argc != 3)
 	{
 		printf("Usage: ./file-io src dest\n");
 		return 1;
 	}

 	// try to open the input file
 	FILE* infile = fopen(argv[1], "r");
 	if (infile == NULL)
 	{
 		printf("Can't open the input file.\n");
 		return 1;
 	}

 	// try to open the output file
 	FILE* outfile = fopen(argv[2], "w");
 	if (outfile == NULL)
 	{
 		printf("Can't open the output file.\n");

 		fclose(infile);
 		return 1;
 	}

 	// write each byte from the infile to the outfile
 	char c;
 	while((c = fgetc(infile)) != EOF)
 	{
 		fputc(c, outfile);
 	}

 	// close the files we've opened
 	fclose(infile);
 	fclose(outfile);
}