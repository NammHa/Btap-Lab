#include <iostream>
using namespace std;
int main()
{
	char  a[100][100];
	int b=0;
	cin>>b;
	int c=1;
	int d =b-c;
	for (int i=0;i<b;i++)
	{	
		for (int j=0;j<d;j++)
		{
			cout<<'.'; 
		}
		for (int k=0;k<c;k++)
		{
			cout<<'*';
		}
		cout<<endl;
		d--;
		c++;
	}
}