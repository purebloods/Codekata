#include<iostream>
using namespace std;
int main()
{
	int n,q,u,v,sum[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},a[20];
	cin>>n>>q;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for (int i=0;i<q;i++)
	{
		cin>>u>>v;
		for(int j=u-1;j<v;j++)
		{
			sum[i]+=a[j];
		}
	}
	for (int j=0;j<q;j++)
		{
			if(sum[j+1]==0)
			{	cout<<sum[j];
				break;
			}
			else
			cout<<sum[j]<<"\n";
			
		}
}
