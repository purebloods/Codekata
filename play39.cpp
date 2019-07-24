#include<iostream>
using namespace std;
int main()
{
	int a,x=1,f=0;
	cin>>a;
	
	while (a>=x)
	{	
		if (a==x)
		{
			cout<<"yes";
			f=1;
			break;
		}
		x*=2;
	}
	if(f==0) cout<<"no";
}
