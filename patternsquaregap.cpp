#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
			cout<<"*";
		for(int k=1;k<=2*i-1;k++)
			cout<<" ";
		for(int l=n;l>=i;l--)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<"*";
		for(int k=2*(n-i);k>=0;k--)
			cout<<" ";
		for(int l=1;l<=i;l++)
			cout<<"*";
		cout<<endl;
	}
	return 0;

}