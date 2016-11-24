#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word1[20]; 
    char word2[20];
    int length1, length2;
    int option;
	char lower;
	char upper;
	int i = 0;
	int a = 0;

    // enter the words 
    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);

	if (strcmp(word1, word2) == 0)
	{
	printf("Both words are equal!\n");
	}
	else
	{
	printf("Both words are not equal!\n");
	}

    printf("Lenght(1), Uppercase(2), Lowercase(3): ");
    scanf("%d", &option);

    switch(option)
	{
		case 1 :
			length1 = strlen(word1);
			length2 = strlen(word2);
			printf("First word's length: %d\n", length1);
			printf("Second word's length: %d\n", length2);
			break;
		case 2 :
			printf("To Upper! >>> ");
			while (word1[i])
			{
				upper = word1[i];
				putchar (toupper(upper));
				i++;
			}
			printf("\n");
			printf("To Lower! >>> ");
			while (word2[a])
			{
				upper = word2[a];
				putchar (toupper(upper));
				a++;
			}
			printf("\n");
			break;
		case 3 :
			printf("To lower! >>> ");
			while (word1[i])
			{
				lower = word1[i];
				putchar (tolower(lower));
				i++;
			}
			printf("\n");
			printf("To lower! >>> ");
			while (word2[a])
			{
				lower = word2[a];
				putchar (tolower(lower));
				a++;
			}
			printf("\n");
			break;
			
	}

    return 0;
}
