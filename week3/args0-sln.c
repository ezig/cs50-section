/*
 * args0.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Practice using argc
 */
 
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    if ((argc - 1) % 2)
    {
        abort();
    }
}