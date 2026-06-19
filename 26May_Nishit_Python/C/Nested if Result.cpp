#include<stdio.h>
main()
{
	int a,b,c,d,total,pr;
	printf("1st Sub:-");
	scanf("%d",&a);
	printf("2nd Sub:-");
	scanf("%d",&b);
	printf("3rd Sub:-");
	scanf("%d",&c);
	printf("4th Sub:-");
	scanf("%d",&d);
	total=a+b+c+d;
	printf("\nTotal:-%d",total);
	pr=(total*100)/400;
	printf("\nPercentage:-%d",pr);
	
	if(a>=40 && b>=40 && c>=40 && d>=40)
	{
	if(pr>=70)
	{
		printf("\nA grade");
	}
	else if(pr>=60 && pr<70)
	{
		printf("\nB grade");
	}
	else if(pr>=50 && pr<60)
	{
		printf("\nC grade");
	}
	else if(pr>=40 && pr<50)
	{
		printf("\nD grade");
	}
}
	else
	{
		printf("\nFail");
	}
}
