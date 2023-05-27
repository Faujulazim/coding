#include<bits/stdc++.h>
using namespace std;

bool is_digit(string s)
{
    int cnt=0;
    for(int i=0;i<(int)s.size();i++)
    {
        int x=s[i]-'0';
        if(0<=x && x<=9);
        else if(s[i]=='.') cnt++;
        else
        {
            return false;
        }
    }
    if(cnt<=1)
    return true;
    else return false;

}

bool is_var(string s)
{

    if('a'<=s[0]&&s[0]<='z');
    else return false;

    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]=='_'||(0<=(s[i]-'0') &&(s[i]-'0')<=9)|| ('a'<=s[i]&&s[i]<='z') || ('A'<=s[i]&&s[i]<='Z'));
        else return false;
    }

    return true;

}


int main()
{
    int n,m,x,y,i,j;
    string str;
    getline(cin,str);
    n=str.size();
    string s1;

    for(i=0;i<n;i++)
    {
        bool flag = true;

        if(str[i]==' '||str[i]==';'||str[i]=='{'||str[i]=='}'||str[i]=='+'||str[i]=='-'||str[i]=='='||str[i]==','||str[i]=='('||str[i]==')'||str[i]=='{'||str[i]=='}'||str[i]=='<'||str[i]=='>'||str[i]=='%')
        {
            flag = false;

            //cout<<i<<"---"<<str[i]<<endl;
            if(s1==" "|| (int)s1.size()==0);
            else if(s1=="int"||s1=="for"||s1=="float")
            {
               cout<<"Keyword = "<<s1<<endl;
               s1.clear();
            }
            else if(is_digit(s1))
            {
                cout<<"Number = "<<s1<<endl;
                s1.clear();
            }
            else if(is_var(s1))
            {
                //cout<<(i+1)<<"----"<<str[i+1]<<"----"<<s1<<endl;

                if((i<n) && str[i]=='(')
                {
                    cout<<"Function =  "<<s1<<str[i]<<endl;
                    i+=1;
                }
                else
                {
                  cout<<"Variable = "<<s1<<endl;
                }
                s1.clear();
            }



            if( (i+1<n && str[i]=='+' && str[i+1]=='+') || (i+1<n && str[i]=='<' && str[i+1]=='=') || (i+1<n && str[i]=='%' && str[i+1]=='d') )
            {
                cout<<"Operator = "<<str[i]<<str[i+1]<<endl;
                i++;
                continue;
            }
            else if(str[i]=='+'||str[i]=='-'||str[i]=='='||str[i]=='<'||str[i]=='>')
            {
                cout<<"Operator = "<<str[i]<<endl;
                continue;
            }

            if(str[i]!=' ')
            cout<<"Operator = "<<str[i]<<endl;

            if(flag)
            {
                cout<<"Invalid = "<<s1<<endl;
                s1.clear();
            }
            s1.clear();
            continue;
        }

        if(str[i]!=' ')
            s1.push_back(str[i]);



    }



    return 0;
}
