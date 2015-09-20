/*
 * args0.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Practice using argc and argv together
 */
 
#include <stdio.h>
#include <cs50.h>
 
int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%d: %s\n", i, argv[i]);
    }
}