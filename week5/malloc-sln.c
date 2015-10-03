/*
* malloc.c
* Ezra Zigmond
* CS50 week5
*
* Goal: Understand how to allocate memory.
* Understand the relationship between arrays and pointers.
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("How many ints:");
	int num = GetInt();
	
	int* i_array = malloc(num * sizeof(int));
	
	for (int i = 0; i < num; i++)
	{
	    i_array[i] = GetInt();
	}
	
	printf("Thanks for the ints! \n");
	for (int i = num - 1; i >= 0; i--)
	{
	    printf("%i\n", i_array[i]);
	}
}