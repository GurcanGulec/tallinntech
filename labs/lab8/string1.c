#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];
    printf("Enter a word: ");
    scanf("%s",word);

    int length = strlen(word);

    for(int i = 0; i < length; i++)
    {
        printf("%c\n", word[i]);
    }

    
    return 0;
}
