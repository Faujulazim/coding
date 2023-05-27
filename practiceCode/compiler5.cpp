#include<bits/stdc++.h>
using namespace std;


map<char, vector<string> > mp;



int main(){
    for(int i = 0;i < 3;i ++){
        string str;
        cin >> str;
        string s = "";
        vector<string> vs;
        for(int i = 3;i < str.size();i ++){
            if(str[i] == '|'){
                vs.push_back(s);
                s = "";
                continue;
            }
            else{
                s += str[i];

            }
        }
        if(s.size()){
            vs.push_back(s);
        }
        mp[str[0]] = vs;

    }

    vector<string> cf_prdct;
   // for(auto x : mp){
        //for(auto y : x.second){
    //    }
   // }
    // cf_prdct.push_back("AB");

    for(int i = 0;i < mp['S'].size();i ++){
           // cout<<mp['S'][i]<<endl;
        cf_prdct.push_back(mp['S'][i]);
    }

    int ans = 1;
    int xx = 4;
    while(xx --){
        vector<string> cf_prdct_tmp;
        for(int i = 0;i < cf_prdct.size();i ++){
               //cout<<cf_prdct[i].size()<<endl;
            string tmp = cf_prdct[i];
            string tmp_cf = "";
            int flag = 1;

            for(int j = 0;j < tmp.size();j ++){
                if(tmp[j] >= 'A' && tmp[j] <= 'Z'){
                       // cout<<tmp[j]<<endl;
                    flag = 0;
                    char chck = tmp[j];
                    for(int k = 0;k < mp[chck].size();k ++){
//cout<<tmp_cf<<endl;
                        cf_prdct_tmp.push_back(tmp_cf + mp[chck][k] + ((j + 1 <= tmp.size())?tmp.substr(j + 1):""));
                    }
                    break;
                }
                else{
                    tmp_cf += tmp[j];
                }
            }
            if(flag){
                cf_prdct_tmp.push_back(tmp);
            }
        }
        cf_prdct.clear();
        cf_prdct = cf_prdct_tmp;
        for(int i = 0;i < cf_prdct.size();i ++){
            if(cf_prdct[i] == "bb"){
                cout << "YES\n";
                ans = 0;
                break;
            }
        }
    }
    if(ans){
        cout << "No\n";
    }


}
/*
S->AB
A->aA|a
B->bB|b
*/
