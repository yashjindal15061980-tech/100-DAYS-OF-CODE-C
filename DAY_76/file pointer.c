#include <stdio.h>

int main()
{
    char name[100];
    char ch;
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", name);

    fp = fopen(name, "r");

    if (fp == NULL)
    {
        printf("Error: File does not exist!");
    }
    else
    {
        printf("File opened successfully.\n");

        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}