#include <stdio.h>

int main(void) 
{
    int sum = 0;
    // starting the loop
    for (int number = 0; number <= 10; number++) 
    {
        // printing out the value of number
        printf("The value of number is %d\n", number); 
	// adding number's value to sum
	sum = sum + number;
    } 
    // printing out the value of sum
    printf("The sum of all the numbers is %d\n", sum);
    return 0;
}
