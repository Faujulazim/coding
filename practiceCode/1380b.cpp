#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,l,S,P,R;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;S=0;R=0;P=0;
		l=s.length();
	//	cout<<l<<"length"<<endl;
		for(i=0;i<l;i++)
		{
			if(s[i]=='S')S++;
			if(s[i]=='R')R++;
			if(s[i]=='P')P++;
			
		}
		if(R>=S&&R>=P)
		{
			for(i=0;i<l;i++)cout<<'P';
		}
		else if(P>=R&&P>=S)
		{
			for(i=0;i<l;i++)cout<<'S';
		}
	else 
		{
			for(i=0;i<l;i++)cout<<'R';
		}
	//	else
	//	cout<<s;
		cout<<endl;
		
	}
}
