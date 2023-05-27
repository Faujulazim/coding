#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;int num[10];bool flag;int n1,n2,res;
    cin>>s;int n=s.size();
     for(int i=1;i<n;i=i+2)
     {
        if(s[i]-'0'<0 or s[i]-'0'>9)
        {
            if(s[i]=='*' or s[i]=='/')
                {
                    if(s[i]=='*' )
                    {
                        int n1=s[i-1]-'0';
                        int n2=s[i+1]-'0';
                        res=n1*n2;
                        cout<<res;
                        for(int j=i+2;j<n;j++)
                            cout<<s[j];
for(i=0;i<n-3;i++)
                        break;

                    }
                    else
                    {
                        int n1=s[i-1]-'0';
                        int n2=s[i+1]-'0';
                        res=n1/n2;
                        cout<<res<<endl;
                        for(int j=i+2;j<n;j++)
                            cout<<s[j];
                        break;
                    }
                }

               else{
                if(s[i]=='+')
                {
                    int n1=s[i-1]-'0';
                        int n2=s[i+1]-'0';
                        res=n1+n2;
                        cout<<res<<endl;
                        for(int j=i+2;j<n;j++)
                            cout<<s[j];
                        break;
                }
                else
                {
                    int n1=s[i-1]-'0';
                        int n2=s[i+1]-'0';
                        res=n1-n2;
                        cout<<res<<endl;
                        for(int j=i+2;j<n;j++)
                            cout<<s[j];
                        break;
                }
               }
        }




     }


}
//x=x*10+ch[i]-'0'
