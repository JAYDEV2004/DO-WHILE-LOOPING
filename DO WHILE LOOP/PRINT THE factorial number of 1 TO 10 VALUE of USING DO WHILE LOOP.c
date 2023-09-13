#include<stdio.h>
int main()
{
	int a, n=1, factorial_number=1;
	printf("ENTER the VALUE = ");
	scanf("%d",&a);
	do{
		factorial_number=factorial_number*a;
		a++;
	}while(a<=n);
	
	return 0;
}