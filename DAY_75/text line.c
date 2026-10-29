#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100], text[200];

    printf("Enter filename: ");
    scanf("%99s", filename);

    getchar();

    fp = fopen(filename, "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}