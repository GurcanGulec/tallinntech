/**
 * File:        multiplication.c
 * Author:      Gurcan Gulec
 * Created:     28 September 2016
 * Last edit:   28 September 2016
 *
 * Description: Learning scanf and trying to create a multiplication table.
 * 
 */


#include<stdio.h>

int main()
{
    int n;
    // asking for a number from the user
    printf("Please enter a number: ");
    scanf("%d",&n);
    // declared variables to use inside the loop
    int i;
    int k;
    // starting the loops
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%5d ", i*k);
        }
        printf("\n");
    }
    return 0;
}
~                                                                                                      
~          