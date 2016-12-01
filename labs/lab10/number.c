/**
 * File: number.c
 * Author: Gurcan Gulec
 * Created: 30 November 2016
 * Last edit: 01 December 2016
 *
 * Description: Homework about files for lab 10.
 *
 */

#include <stdio.h>
#include <stdlib.h> // for atoi function

int main()
{
	// creating the file pointers we are going to need

	FILE *fp = fopen("bad_input.txt", "r");
	FILE *ep = fopen("even.txt", "w");
	FILE *op = fopen("odd.txt", "w");

	// char string we are going to use with fgets function

	char number[10];
	
	// checking if the files was opened

	if (fp == NULL || ep == NULL || op == NULL)
	{
		printf("File was not opened.\n");
	}
	else
	{
		printf("File was opened.\n");	

		// creating a loop to check the lines
		
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

			// making sure the values are numbers only	
			
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
				// convertin string into an integer

				myNumber = atoi(number);
				
				// finding out which ones are odd and which ones are even
				// and writing them to files

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

		// closing the files

		fclose(fp);	
		fclose(ep);
		fclose(op);
	}

	return 0;
}
