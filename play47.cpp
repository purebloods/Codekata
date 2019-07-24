#include<iostream>
using namespace std;
int main()
{
	int a[30],n,min,max;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	max=a[0];
	for(int i=0; i<n; i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
	cout<<max<<" "<<min;
}
