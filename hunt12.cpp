#include<iostream>
using namespace std;
int main()
{
	int n,a[30],k,temp;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<a[k-1];
}
