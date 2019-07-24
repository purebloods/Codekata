#include<iostream>
using namespace std;
int main()
{
	int a,sum=0;
	int b[10];
	cin>>a;
	for(int i=0; i<a;i++)
	{		cin>>b[i];
			if (b[i]<0)
			sum+=b[i];
	}
	cout<<sum;
}

