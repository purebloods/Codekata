#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,f=0;
	cin>>n;
	for (int i=2; i<=n;i++)
	{
		if(i%10==3)
		{	for (int j=2; j<i/2; j++)
				{	
					if(i%j==0)
							f=1;
				}
			if(f==0)
				sum+=i;
		}
		
	}
	cout<<sum;
}
