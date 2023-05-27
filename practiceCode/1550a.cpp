#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,n,val;
	cin>>t;
	while(t--)
	{
		cin>>x;
		x--;n=1;val=3;
		while(x>0)
		{
			x=x-val;
			n++;
			val=val+2;
		}
		cout<<n<<endl;
	}
}
