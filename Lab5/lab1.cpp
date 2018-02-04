#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	c=0;
	cin>>a>>b;
	for (int i=a;i<b+1;i++)
	{
		c+=i;
	}
	cout<<c<<endl;
}