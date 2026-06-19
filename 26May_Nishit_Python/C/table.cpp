#include<stdio.h>
main()
{
	int i=1,t;
	printf("Enter Number:-");
	scanf("%d",&t);
	while(i<=10)
	{
		printf("%d*%d=%d\n",t,i,t*i);
		i++;
	}
}
