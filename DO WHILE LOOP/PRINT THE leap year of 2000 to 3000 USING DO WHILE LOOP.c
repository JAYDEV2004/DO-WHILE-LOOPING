#include<stdio.h>
int main()
{
	int a=2000;
	
	printf("enter the any year between 2000 TO 3000 YEARS");
	scanf("%d",&a);
	do{
		if(a%4==0)
		printf("%d\n",a);
		a++;
	}while(a<=3000);
	
	return 0;
}