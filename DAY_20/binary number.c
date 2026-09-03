#include<stdio.h>
int main()
{
    int n,digits,result=0,place=1;
    printf("enter the binary bnumber :");
    scanf("%d", &n);
    while(n>0)
    {
        digits=n%10;
        if(digits==0)
        result=result+1*place;
    n=n/10;
    place=place*10;
    }
      printf("1's complement =%04d",result);
      return 0;
}