#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		{for(int j=n-i;j>=0;j--)
			cout<<" ";
		for(int k=1;k<=i;k++)	

			if(k==1||k==i||i==n)
				cout<<"*";
			else
				cout<<" ";
			cout<<endl;

		}
	return 0;
}