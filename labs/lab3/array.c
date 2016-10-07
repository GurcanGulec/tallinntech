/**
 * File array.c
 * Author: Gurcan Gulec
 * Created: 06 October 2016
 * Last edit: 07 October 2016
 *
 * Description: Homework about arrays for lab 3.
 *
 */

#include <stdio.h>

#define ARRAYLENGHT 10 

int main(void)
{
    int tempValue;
    int i, j;
    int a;

    float sum = 0;
    float median;
    int sumOfOdd = 0;

    // creating the array

    int numbers [10] = {21, 4, 13, 10, 18, 92, 45, 23, 56, 44};
    int n = 10;

    // sorting the numbers

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j<n-i-1; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                tempValue = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = tempValue;
            }
        }
    }

    // printing out the numbers in order

    printf("Sorted: ");
    
    for (i = 0; i < n; i ++)
    {
        printf("%d  ", numbers[i]);
    }

    // printing out the smallest and the biggest number

    printf("\nSmallest: %d\n", numbers[0]);
    printf("Biggest: %d\n", numbers[9]);

    // calculating the sum of the numbers and printing them out

    for (a = 0; a < n; a++)
    {
        sum += numbers[a];
    }
    printf("Sum: %f\n", sum/n);

    // finding the median
    
    median = (numbers[n/2-1] + numbers[n/2])/2;
    printf("Median : %f\n", median);

    // for "some other manipulation of numbers" i found the odd numbers and summed them up

    for (int j = 0; j < n; j++)
    {
        if (numbers[j] % 2)
        {
            sumOfOdd += numbers[j];
        }
    }
    printf("Sum of Odd Numbers: %d", sumOfOdd);
    return 0;

}
