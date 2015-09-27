/*
 * functions.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: practice factoring out code into functions
 */
 
#include <stdio.h>
#include <cs50.h>
 
int GetPositiveInt(void);

int main(void)
{
    // TODO: factor out getting a positive integer into
    // a new function so that we don't have to copy and paste code
    
    int n = GetPositiveInt();
    int m = GetPositiveInt();
}

int GetPositiveInt(void)
{
    int n;
    do 
    {
        printf("Please give me a positive int: ");
        n = GetInt();
    } while (n < 0);
    
    return n;
}