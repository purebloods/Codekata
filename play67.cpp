#include<iostream>
using namespace std;
int main()
{
	int n,f=1;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		f*=i;
	}
	cout<<f;
}
