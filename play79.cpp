#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int n,t,max=0,a1;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			a1=abs(a[i]-a[j]);
			if (i==0) max=a1;
			if (max<a1) max=a1;
		}
	}
	cout<<a1;
}
