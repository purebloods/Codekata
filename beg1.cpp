#include <iostream>
#include <string>
using namespace std;

int main()
{
	int c;
	char a[50];
	cin.getline (a,50);
	cin>>c;
	for (int i=0; a[i]!='\0';i++)
	{
		if (i==c-1)
		    cout<<a[i];
	}
	
}

