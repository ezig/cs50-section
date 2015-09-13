/*
 * arrays1.c
 * Ezra Zigmond
 * CS50 week3
 *
 * Goal: Show that iterating through a string is like 
 * iterating through an array
 */
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>
 
int main(void)
{
    string name = "David Malan";
    
    // correct but not very good
    /*
     *  for (int i = 0; i < strlen(name); i++)
     *  {
     *      printf("%c\n", name[i]);
     *  }
     */
     
    // much better
    int len = strlen(name);
    
    for (int i = 0; i < len; i++)
    {
        printf("%c\n", name[i]);
    }
}