#include<iostream>
using namespace std;
int main()
{
	int n,k,f=0;
	cin>>n>>k;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[i]+a[j]==k)
				{
					f++;
					break;
				}
		}
	}
	if(f==0)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
