#include<bits/stdc++.h>
using namespace std;
void print_floyd(int n)
{
	int i,j,k=1;
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		cout<<k<<" ";
    k++;
	}
	cout<<"\n";
}
}	
	int main()
	{
		int n;
		cin>>n;
		print_floyd(n);
		return 0;
	}
		
