#include<stdio.h>
int main()
{
	int a,n=1;
	
	printf("ENTER THE VALUE = ");
	scanf("%d",&a);
	do{
		if(a%2==1)
		printf("THIS IS THE ODD NUMBER = %d\n",a);
		a++;
	}while(a<=n);
	
	return 0;
}