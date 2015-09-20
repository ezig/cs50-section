/*
 * args0.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Practice using argc
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
 
int main(int argc, string argv[])
{
    // make the program crash if the number of arguments is odd
    if ((argc - 1) % 2)
    {
        abort();
    }
}