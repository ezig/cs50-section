/*
 * arrays0.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Show two different ways to initialize an array, 
 */
 
#include <stdio.h>
 
int main(void)
{
    int nums[3];
    nums[0] = 50;
    nums[1] = 51;
    nums[2] = 52;
    
    int newNums[] = {50, 51, 52};
    
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", newNums[i]);   
    }
}