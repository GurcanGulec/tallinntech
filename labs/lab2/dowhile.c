#include <stdio.h>

int main(void)
{
    // declaring a variable
    int countDown = 11;
    // starting the loop
    do 
    {
        countDown--;
	// printing out the value of countDown
	printf("The value of countDown is %d\n", countDown);
    }while(countDown > 0);
    return 0;

}
