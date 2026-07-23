#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter value of A:-";cin>>a;
	cout<<"Enter value of B:-";cin>>b;
	cout<<"Enter value of C:-";cin>>c;
	if(a>b && a>c)
	{
		cout<<"a is big";
	}
	else if(b>a && b>c)
	{
		cout<<"b is big";
	}
	else
	{
		cout<<"c is big";
	}
}
