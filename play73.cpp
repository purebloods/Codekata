#include<iostream>
using namespace std;
int main()
{
	int n,k,y;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==k)
			y=i+1;
	}
	cout<<y;	
}
