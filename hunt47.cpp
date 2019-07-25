#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char a[50];
	int n,i,k=0;
	cin.getline(a,50);
	n= strlen(a);
	for( i=0;i<n;i++)
	{
		if((a[i]==' ') && (a[i+1]==' '))
		{
			for(int j=i; j<n;j++)
			{
				a[j]=a[j+1];
				k++;
				
			}
			n--;
			i--;
		}
	}
	for( i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
