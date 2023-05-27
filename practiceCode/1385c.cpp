#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,j,count;
	cin>>t;
	bool b,c;
	while(t--)
	{
	  cin>>n;c=0;b=0;
	  long long int a[n];
	  for(i=0;i<n;i++)
	  cin>>a[i];
	int count=1;
	for(i=n-1;i>0;i--)
	{
		if(a[i]<a[i-1])
		b=true;
		else
		c=true;
		
		if(c&&a[i]<a[i-1])
		break;
		else 
		count++;
	}
	
	cout<<n-count<<endl;
	}
	
}

