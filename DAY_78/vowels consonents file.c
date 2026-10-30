
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower((unsigned char)ch);

        if (isalpha((unsigned char)ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(fp);

    return 0;
}
