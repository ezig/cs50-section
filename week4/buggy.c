/*
 * functions.c
 * Ezra Zigmond
 * CS50 week4
 *
 * Goal: fix my bubble sort :(
 */
 

#include <stdio.h>
#include <cs50.h>

#define SIZE 5

int main(void) 
{
    int values[SIZE] = {50, 68, 45, 34, 65};
    
    int swaps = 0;
    
    while(true)
    {
        swaps = 0;
        
        for(int i = 0; i < SIZE - 1; i++)
        {
            // if the pair is out of order, swap
            if(values[i] < values[i + 1])
            {
                int tmp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = tmp;
                
                swaps++;
            }
        }
        
        if (swaps == 0) break; // array is already sorted
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", values[i]);
    }
}