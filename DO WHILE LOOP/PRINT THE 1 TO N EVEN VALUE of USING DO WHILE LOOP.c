#include<stdio.h>
int main()
{
	int a, n=0;
	
	printf("ENTER THE VALUE =\n ");
	scanf("%d",&a);
	do{
		if(a%2==0)
		printf("THIS IS THE EVEN NUMBER = %d",a);
		a++;
	}while(a<=n);
	
	return 0;
}