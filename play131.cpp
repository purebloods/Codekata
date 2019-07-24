#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0;
	cin>>n;
	while (n!=0)
	{
		r=n%10;
		if(r%2!=0)
		{
			sum+=r;
		}
		n=n/10;
	}
	if (sum%2==0)
		cout<<'E';
	else
		cout<<'O';
	return 0;
}
