/*
 * scope.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Understand scope of variables
 */

#include <stdio.h>

void scope1(void);
void scope2(int a);
void scope3(void);

int main(void)
{
    scope1();
    scope2(27);
    scope3();
}

void scope1(void)
{
    {
        int a = 4;
        printf("%d\n", a); // what will this print?
    }

    {
        int a = 5;
        printf("%d\n", a); // how about this?
    }
    
    printf("%d\n", a); // this one?
}

void scope2(int a)
{
    printf("%d\n", a); // how about now
}

void scope3(void)
{
    printf("%d\n", a); // ??????
}