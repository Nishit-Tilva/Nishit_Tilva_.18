#include<iostream>
using namespace std;
main()
{
	int s1,s2,s3,s4,total;
	float pr;
	cout<<"Enter sub1:-";cin>>s1;
	cout<<"Enter sub2:-";cin>>s2;
	cout<<"Enter sub3:-";cin>>s3;
	cout<<"Enter sub4:-";cin>>s4;
	total=s1+s2+s3+s4;
	pr=total/4;
	cout<<"\nTotal:-"<<total;
	cout<<"\nPR:-"<<pr;
	
	if(s1>=40 && s2>=40 && s3>=40 && s4>=40)
	{
		if(pr>=70)
		{
			cout<<"\nA+";
		}
		if(pr>=60)
		{
			cout<<"\nA";
		}
		if(pr>=50)
		{
			cout<<"\nB+";
		}
		if(pr>=40)
		{
			cout<<"\nB";
		}
	}
	else
	{
		cout<<"\nResult:FAIL";
	}
}
