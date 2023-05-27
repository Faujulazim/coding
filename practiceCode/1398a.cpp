#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,i;
	cin>>t;
	while(t--)
	{
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
	cin>>i;
	if(v[0]+v[1]<=v[n-1])
	cout<<1<<" "<<2<<" "<<n<<endl;
	else
	cout<<-1<<endl;		
		
		
		
		
	/*	long long a[n];
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		}
		if(a[0]+a[1]<=a[n-1])
		{
			cout<<1<<" "<<2<<" "<<n<<endl;
		}
		else
		cout<<-1<<endl;*/
	}
}
