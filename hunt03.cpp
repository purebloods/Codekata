#include<iostream>
using namespace std;
int main()
{
	int n,a[30],i,f=-1;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		{
			if (a[i]==i)
			{
				cout<<i<<" ";
				f=0;
			}
			
				
		}
	if(f==-1)
		cout<<f;
	return 0;
}
