#include <stdio.h>

int main () 
{
	int sum = 0;
	for (int number = 0; number <= 10; number++) //Initialize for loop
	{
		printf("The value of number is %d\n", number); //Print out the value of i
		sum = sum + number;
	} 
	printf("The sum of all the numbers is %d\n", sum);
	return 0;
	
}
