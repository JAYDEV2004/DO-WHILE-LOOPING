#include<stdio.h>
int main()
{
	int a,n=1,sum=0;
	printf("enter the your favourite value = ");
	scanf("%d",&a);
	
	do{
		printf("%d\n",n);
		sum=sum+n;
		n++;
	}while(n<=a);
	
	printf("\nSUM OF ALL VALUE WITH YOUR FAVOURITE VALUE = %d", sum);
}