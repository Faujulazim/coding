#include<bits/stdc++.h>
using namespace std;
int main(){
   int t = 2;
    while(t --){
        cout << "Enter starting state\n";
        int s,f,n;
        cin >> s;
        cout << "Enter number of final state\n";
        cin >> f;
        int fnal[f];
        cout << "Enter final states\n";
        for(int i = 0;i < f;i ++)
            cin >> fnal[i];
        cout << "Enter total edge\n";
        cin >> n;
        cout << "Enter DFA\n";
        char graph[f + 10][f + 10];
        for(int i = 0;i < f + 10;i ++){
            for(int j = 0;j < f + 10;j ++)
                graph[i][j] = '0';
        }
        for(int i = 1;i <= n;i ++){
            int u,v;
            char w;
            cin >> u >> v >> w;
            graph[u][v] = w;
        }
        cout << "\n\n";
        for(int i = 1;i <= n / 2;i ++){
            for(int j = 1;j <= n / 2;j ++){
                cout << graph[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "Enter language\n";
        string language;
        cin >> language;

        for(int i = 0;i < language.size();i ++){
            char ch = language[i];

            for(int j = 1;j <= n / 2;j ++){
                if(graph[s][j] == ch){
                    s = j;

                    break;
                }
            }
        }
        cout << s << "\n";
        int sol = 0;
        for(int i = 0;i < f;i ++){
            if(fnal[i] == s)
                sol = 1;
        }
        if(sol){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }

    return 0;}

    /*

1 1 b
1 2 a
2 3 a
2 1 b
3 3 b
3 2 a


    */
