#include <stdio.h>

int main ()
{
	int countDown = 11;
	do 
	{
		countDown--;
		printf("The value of countDown is %d\n", countDown);
	}while(countDown > 0);
	return 0;

}
