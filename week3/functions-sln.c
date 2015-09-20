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
    int n = GetPositiveInt();
    int m = GetPositiveInt();
    
    printf("n: %i\nm: %i \n", n, m);
}

int GetPositiveInt(void)
{
    int input;
    do
    {
        printf("Please give me a positive int: ");
        input = GetInt();
    } while (input < 0);
    
    return input;
}