#include<iostream>
using namespace std;
int main()
{
	int n,p1=1,p2=1;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int j=0;j<n;j++)
	{   if (j==0)
			p1=1;
		else
			p1*=a[j-1];
		for (int i=j+1;i<n;i++)
			p2*=a[i];
		b[j]=(p1*p2);
		if(j==0)
			cout<<b[j];
		else
			cout<<" "<<b[j];
		p2=1;
	}
}
