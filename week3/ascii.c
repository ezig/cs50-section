/*
 * ascii.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Practice working with ASCII codes
 */
  
#include <stdio.h> 

int main(void)
{
    // print out the uppercase alphabet on one line
    for(char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c", c);
    }
    
    printf("\n");
}