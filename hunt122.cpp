#include<iostream>
using namespace std;
int main()
{
	int n,a[30],s1=0,s2=0,f=1;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	for (int i=1;i<n;i++)
	{	s1+=a[i-1]; 
		for(int j=i+1;j<n;j++)
		{
				s2+=a[j];
		}
		if(s1==s2)
			{
				f=0;
				break;
			}
		s2=0;
	}
	if(f==1)
		cout<<"no";
	else
		cout<<"yes";
	return 0;
	
}
