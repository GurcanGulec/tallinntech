#include <stdio.h>

int main ()
{
	int number = 0;
	while (number <= 10)
	{
		printf("A = %d\n", number);
		if (number == 3)
		{
			printf("Stopping here cuz my favorite number is %d\n", number);
			break;
		}

		number++;
	}

	return 0;
}
