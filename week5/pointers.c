/*
* pointers.c
* Ezra Zigmond
* CS50 week5
*
* Goal: Practice some pointers
*/

#include <stdio.h>

int main(void)
{
    int x = 2, y = 8, z = 12;
    
    int* ptr_x = &x;
    int* ptr_y = &y;
    int* ptr_z = &z;
    
    z = x * y;
    
    x *= y;
    
    y = *ptr_x;
    
    *ptr_x = x * y;
    
    ptr_x = ptr_y;
    
    x = (*ptr_x) * (*ptr_z);
    
    // Try to predict the ouput without running the code!
    printf("x: %i\n", x);
    printf("y: %i\n", y);
    printf("z: %i\n", z);
}