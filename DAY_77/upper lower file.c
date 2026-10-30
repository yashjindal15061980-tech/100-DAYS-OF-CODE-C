
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File opening error");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper((unsigned char)ch);
        fputc(ch, fp2);
    }

    printf("File converted successfully");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
