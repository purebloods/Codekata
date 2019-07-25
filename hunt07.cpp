#include<iostream>
using namespace std;
int main()
{
	int n,a[20],f=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(i%2==0 && a[i]%2!=0)
			{	
				if(f!=0)
					cout<<" "<<a[i];
				else
					cout<<a[i];
				f++;
			
			}
		if(i%2!=0 && a[i]%2==0)
			{	
				if(f!=0)
				cout<<" "<<a[i];
				else
					cout<<a[i];
				f++;
			
			}
	}
	
}
