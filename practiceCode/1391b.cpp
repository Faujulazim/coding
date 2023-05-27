#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,c;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;c=0;
		char s[101][101];
	   for(int i=0;i<n;i++)
	    cin>>s[i];
	     for(int i=0;i<n;i++)
	     {
	     	if(s[i][m-1]=='R')
	     	c++;
		 }
	    for(int i=0;i<m;i++)
	    {
	    	if(s[n-1][i]=='D')
	    	c++;
		}
		cout<<c<<endl;
	}
}
