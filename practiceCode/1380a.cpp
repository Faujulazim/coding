#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,k;
	int a[1005];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<n-1;i++)
		{
			if(a[i]>a[i-1]&&a[i]>a[i+1])
			{
				cout<<"YES"<<endl;
				cout<<i<<" "<<i+1<<" "<<i+2<<endl;
				break;
			}
			if(i==n-2)
			cout<<"NO"<<endl;
		}
	}
}
