#include<iostream>
using namespace std;
int main()
{
	int n,a[30],b[30],k=0,temp;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (int i=0;i<n;i++)
	{
		k+=a[i];
		k*=10;
	}
	cout<<k/10;
}
