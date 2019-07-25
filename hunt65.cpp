#include<iostream>
using namespace std;
int main()
{
	int n,k,a[30];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(int j=i;j<n;j++)
			{
				a[j]=a[j+1];
				
			}
			n--;
			i--;
		}
	}
	cout<<a[0];
	for(int i=1;i<n;i++)
	{
		cout<<" "<<a[i];
	}
}
