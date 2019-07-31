#include<iostream>
using namespace std;
int main()
{
	int n,co=0,ce=0;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]%2==0)
			ce++;
		else
			co++;
	}
	for (int i=0;i<n;i++)
	{
		if((co>ce)&&(a[i]%2==0))
			cout<<a[i];
		if((co<ce)&&(a[i]%2!=0))
		cout<<a[i];
	}
}
