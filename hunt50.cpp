#include<iostream>
using namespace std;
int main()
{
	int a,b,i=0;
	cin>>a>>b;
	while(a>=b)
	{
		a=a-b;
		i++;
	}
	cout<<i;
	return 0;
}
	
