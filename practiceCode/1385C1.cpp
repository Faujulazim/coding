#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int  t,i,j,n,s,count;
	cin>>t;
	while(t--)
	{
		cin>>n;count=-1;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		j=n-1;s=0;i=0;
		for(;i<j;)
		{
			if(a[i]<a[j]&&a[i]>=s)
			
			{
				s=a[i];i++;
			}
			else if(a[j]<=a[i]&&a[j]>=s)
			{
				s=a[j];j--;
			}
			else
			{
				if(a[i]<a[j])
				{
				count=i-1;
				
				j=n-1;s=0;
				}
				else
				{
				count=i;
				i++;
				j=n-1;s=0;
				}
			}
			
		}
		
		cout<<count+1<<endl;
		
	}
}
