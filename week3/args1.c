/*
 * args0.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Practice using argc and argv together
 */
 
#include <stdio.h>
#include <cs50.h>

int GetInt(void);

int main(int argc, string argv[])
{
    // write a program that will print out all of the command-line arguments
    // on their own lines
    
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
