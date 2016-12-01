#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("bad_input.txt", "r");
	FILE *ep = fopen("even.txt", "w");
	FILE *op = fopen("odd.txt", "w");

	char number[10];

	if (fp == NULL || ep == NULL || op == NULL)
	{
		printf("File was not opened.\n");
	}
	else
	{
		printf("File was opened.\n");	
		
		while (fgets(number, 10, fp) != NULL)
		{
			int size;
			for (int i = 0; i < 10; i++)
			{
				if (number[i] == '\0')
				{
					size = i;
					break;
				}
			}
			
			for (int i = size-1; i >= 0; i--)
			{

				if (number[i] < 48 || number[i] > 57)
				{
					number[i] = '\0';
					size = i;
				}
			}	
			
			int myNumber;
			if (size > 0)
			{
				myNumber = atoi(number);
					
				if (myNumber % 2)
				{
					fprintf(op, "%d\n", myNumber);
				}
				else
				{
					fprintf(ep, "%d\n", myNumber);
				}
			}
		}

		fclose(fp);
		fclose(ep);
		fclose(op);
	}

	return 0;
}
