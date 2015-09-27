/*
 * arrays0.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Show two different ways to initialize an array
 */
 
#include <stdio.h>
 
int main(void)
{
    // fill in the arrays with the numbers 50, 51, 52
    int nums[3];
    nums[0] = 50;
    nums[1] = 51;
    nums[2] = 52;
    
    // now use shorthand notation to do the same
    int newNums[3] = {50, 51, 52};
}