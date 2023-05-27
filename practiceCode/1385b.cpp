#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		int m=2*n;
		int a[m];
		for(i=0;i<m;i++)
		{
			cin>>a[i];
		}
	//	sort(a,a+m);
		 for (i=0; i<m; i++) 
    { 
        // Check if the picked element is already printed 
        
        for (j=0; j<i; j++) 
           if (a[i] == a[j]) 
               break; 
  
        // If not printed earlier, then print it 
        if (i == j) 
          cout << a[i] << " "; 
    } 
	cout<<endl; 
	}
}
