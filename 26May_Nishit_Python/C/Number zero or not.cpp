#include<stdio.h>
main()
{
	int a,b;
	printf("Enter first no:-");
	scanf("%d",&a);
	printf("Enter second no:-");
	scanf("%d",&b);
	if(a>0 && b>0)
	{
		if(a>b)
		{
			printf("Sum:- %d",a+b);
		}
		else
		{
			printf("Multi:- %d",a*b);
		}
	}
	else
	{
		printf("\nNumber is zero");
	}
}
