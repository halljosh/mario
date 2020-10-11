// CS50 Problem Set 1 "Mario"

#include <cs50.h> //proprietary CS50 libraries
#include <stdio.h>

int main(void)
{
    int height, i, j, k;
    
    // get pyramid height
    do
    {
        printf("Enter your pyramid height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    // print lines (vertical)
    for (i = 1; i <= height; i++)
    {
        // print spaces (horizontal)
        for (j = 0; j < (height - i); j++)
        {
            printf(" ");
        }
        
        // print hashes (horizontal)
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    return 0; //success! 
}