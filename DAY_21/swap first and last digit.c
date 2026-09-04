#include<stdio.h>
int main()
{
	int n,firstdigit,lastdigit,temp;
	printf("enter the number :");
	scanf("%d", &n);
	lastdigit=n%10;
	firstdigit=n;
	while(firstdigit>=10)
	{
		firstdigit=firstdigit/10;
	}
	temp = firstdigit;
	firstdigit = lastdigit;
	lastdigit = temp;
	printf("after swapping firstdigit is %d lastdigit is %d",firstdigit,lastdigit);
	return 0;
}