#include<iostream>
using namespace std;
int main()
{
	int n,a[50],s1=0,s2=0,f=0;
	int a1,a2;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	if(n<4)
	{
		if(n==2)
		{
			if(a[0]==a[1])
			 cout<<"yes";
			else
			  cout<<"no";
		}
		if(n==3)
		{
			if((a[0]+a[1]==a[2]) || (a[0]=a[1]+a[2]))
				cout<<"yes";
			else
				cout<<"no";
		}
	}
	else
	{
	
		
		s1=a[0];
		for(int i=1;i<n;i++)
		{
			s1+=a[i];
			a1= s1/(i+1);
			
			for (int j=i+1;j<n;j++)
			{
				s2+=a[j];
				
			}
			a2= s2/(n-i-1);
			if(a1==a2)
			{
				f++;
				break;
			}
			
			cout<<a1<<" "<<a2<<"\n";
			s2=0;
		}
		if(f==0)
			cout<<"no";
		else
			cout<<"yes";
	}
}
