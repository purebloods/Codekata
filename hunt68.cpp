#include<iostream>
using namespace std;
int main()
{
	int a[30],n,min,mini,max,maxi;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	 	cin>>a[i];
	}
	max=min=a[0];
	maxi=mini=0;
	for(int i=0;i<n;i++)
	{
	 	if(max<a[i])
	 	{
	 		max=a[i];
	 		maxi=i;
		 }
		if(min>a[i])
		{
			min=a[i];
			mini=i;
		}
	}
	cout<<mini+1<<" "<<maxi+1;
	
	
}
