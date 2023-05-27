#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i;
	cin>>t;
	long long int a[3];
	while(t--)
	{
		for(i=0;i<3;i++)
		{
			cin>>a[i];
		}
		sort(a,a+3);
		//for(i=0;i<3;i++)
	//	cout<<a[i]<<endl;1
		if(a[2]==a[1]||a[2]==a[0])
		{
			cout<<"YES"<<endl;
			cout<<a[2]<<" ";
			if(a[2]==a[1])
			cout<<a[0]<<" ";
			else cout<<a[1];
			cout<<1<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
