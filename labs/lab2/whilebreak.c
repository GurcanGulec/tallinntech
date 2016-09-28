/**
 * File: whilebreak.c
 * Author: Gurcan Gulec
 * Created: 24 September 2016
 * Last edit: 27 September 2016
 * 
 * Description: Homework about while-break.
 * 
 */

#include <stdio.h>

int main(void)
{
    int number = 0;
    while (number <= 10)
    {
        printf("The value of number is  %d\n", number);
	// using if to decide which number to stop
	if (number == 3)
	{   
	    // printing out the thing I wanna print out :P
	    printf("Stopping here cuz my favorite number is %d\n", number);
	    // making it stop with break;
	    break;
	}
	// increasing the value of number
	number++;
    }
    return 0;
}
