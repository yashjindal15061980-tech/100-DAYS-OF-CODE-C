
#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while (fscanf(fp, "%d", &num) != EOF)
    {
        sum = sum + num;
        count++;
    }

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    fclose(fp);

    return 0;
}
