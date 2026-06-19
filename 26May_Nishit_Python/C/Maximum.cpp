#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter 1st No.");
	scanf("%d",&a);
	printf("Enter 2nd No.");
	scanf("%d",&b);
	printf("Enter 3rd No.");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("1st is maximum");
	}
	else if(b>a && b>c)
	{
		printf("2nd is maximum");
	}
	else
	{
		printf("3rd is maximum");
	}
}
