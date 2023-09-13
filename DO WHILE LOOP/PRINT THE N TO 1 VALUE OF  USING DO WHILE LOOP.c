#include<stdio.h>
int main()
{
	int a, n=1;
	printf("enter the value = ");
	scanf("%d",&a);
	do
	{
		printf("%d",a);
		a--;
	}while(a>=n);
	return 0;
}