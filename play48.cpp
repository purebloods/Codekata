#include<iostream>
using namespace std;
int main()
{
	int n,a[30],sum=0;
	cin>>n;
	for(int i=0; i<n;i++)
	   {
	   	cin>>a[i];
	   	sum=sum+a[i];
	   }
	cout<<sum/n;
}
