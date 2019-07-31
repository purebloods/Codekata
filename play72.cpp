#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],max;
	for (int i=0;i<n;i++)
	{	
		cin>>a[i];
		if(i==0)
			max=a[0];
		if(max<a[i])
			max=a[i];
		
	}
	cout<<max;
	return 0;
}
