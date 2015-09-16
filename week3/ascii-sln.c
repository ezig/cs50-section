/*
 * ascii.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Practice working with ASCII codes
 */
 
 /* I have seen some students do something like this:
  * #define A 65
  * #define Z 90
  * But there's no need to!
  */
  
#include <stdio.h> 
 
int main(void)
{
    // Don't do this, avoid using magic ASCII numbers
    // for (int i = 65; i <= 90; i++)
    // {
    //     putchar(i);
    // }
    
    for (int i = 'A'; i <= 'Z'; i++)
    {
        putchar(i);
    }
    
    printf("\n");
}