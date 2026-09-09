#include<stdio.h>
int main()
{
	int arr[10],n,i;
	printf("enter the number :");
	scanf("%d", &n);
	for(i=1;arr[i]<=n;i++)
	{
	  if(arr[i]%2==0)
	  {
	  	printf("even");
	  }
	  else
	  {
	  	printf("odd");
	  }
	}
	  printf("%d", arr[i]);
	  return 0;
}
