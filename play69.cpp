#include<iostream>
using namespace std;
int main()
{ 
	int n,k,a[30];
	cin>>n>>k;
	for(int i=0; i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-k;i++)
		cout<<a[i]<<" ";
	return 0;
	
	
	
}
