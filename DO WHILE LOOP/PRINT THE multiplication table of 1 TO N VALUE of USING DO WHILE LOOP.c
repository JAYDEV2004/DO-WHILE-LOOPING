#include<stdio.h>
int main()
{
	int a, n=1;
	
	printf("ENTER THE VALUE FOR MULTIPLICATION =");
	scanf("%d",&a);
	
	do{
		printf("%d * %d = %d",a,n,(a*n));
		a++;
	}while(a<=n);
	
	return 0;
}