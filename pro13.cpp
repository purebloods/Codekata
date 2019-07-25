#include<iostream>
using namespace std;
int main()
{
	int n,q,u,v,min[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},a[20];
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for (int i=0;i<q;i++)
	{
		cin>>u>>v;
		min[i]=a[u];
		for(int j=u-1;j<v;j++)
		{
			if(min[i]>a[j])
				min[i]=a[j];
		}
	}
	for (int j=0;j<q;j++)
		{
			if(j==q-1)
			{	cout<<min[j];
				break;
			}
			else
			cout<<min[j]<<"\n";
			
		}
}
