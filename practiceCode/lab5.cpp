#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string A;
    string B;
    int cnt=0;
    cout<<"s->";
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {
        for(int j=i+1;j<s.length();j++)
            {if(s[i]==s[j])
             cnt++;}

    }
    cnt++;
    while(cnt--)
    {
        cout<<"A->";
        cin>>A;
        cout<<"B->";
        cin>>B;
    }
}
