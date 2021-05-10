#include<iostream>
using namespace std;
int main()
{
	int opration,sum,sub,div,mul,a,b;
cout<<"enter the no for calculation";
	cin>>a>>b;
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
cout<<"enter the opration \n "<<"sum=press 1 \n"<<"subtract=press 2\n"<<"multiple=press 3\n"<<"divison=press 4 \n";
	cin>>opration;
	switch(opration)
	{
		case 1:
			cout<<sum;
			break;
        case 2:
	        cout<<sub;
				break;
		case 3:
			cout<<mul;
			    break;
	   case 4:
	   	    cout<<div;
	   	        break;
	}
}
