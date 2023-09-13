#include<stdio.h>
int main()
{
	int a,n=1;
	printf("ENTER THE VALUE = ");
	scanf("%d",&a);
	do{
		printf("%d",a);
		a++;
	}while(a<=n);
	return 0;
}