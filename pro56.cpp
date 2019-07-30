#include<iostream>
using namespace std;
int main()
{
	int n,t,sum=0;
	cin>>n>>t;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=86400-a[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=b[i];
		if(sum>=t)
		{
			cout<<i+1;
			break;
		}
	}
}
