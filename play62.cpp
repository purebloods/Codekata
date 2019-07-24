#include<iostream>
using namespace std;
int main()
{
	int n,r,i;
	cin>>n;
	for( i=1; i<=n; i++)
	{	if(n%i==0)
		{r=n/i;
		if(r%2!=0)
			break;
		}
	}
	cout<<i;
}
