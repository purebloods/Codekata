#include<iostream>
using namespace std;
int main()
{
	int a,x=1,f=0,n;
	cin>>a;
	cin>>n;
	
	while (a>=x)
	{	
		if (a==x)
		{
			cout<<"yes";
			f=1;
			break;
		}
		x*=n;
	}
	if(f==0) cout<<"no";
}
