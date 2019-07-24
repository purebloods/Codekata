#include<iostream>
using namespace std;
int main()
{
	int n,l,r,a[30];
	cin>>n>>l>>r;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{	
		if(a[i]>=l && a[i]<=r)
		{
			cout<<a[i];
			break;
		}
	}
}
