#include <bits/stdc++.h>
using namespace std;
bool isNum(string s) {
    for(char i : s) {
        if(i == '.') continue;
        int temp = i - '0';
        if(temp < 0 or temp > 9 ) return false;
    }
    return true;
}

bool isKey(string s) {
    vector<string> keywords = {"int", "float", "double", "if", "else", "for", "return", "long", "while"};
    for(auto i : keywords) {
        if(s == i) return true;
    }
    return false;
}

bool isFun(string s) {
    int cnt = 0;
    for(int i = 0;i < s.size();i++) {
        if(s[i] == '(' or s[i] == ')') cnt++;
    }
    return cnt == 2;
}

bool isOperator(string s) {
    vector<string> op = {"+", "-", "*","/", "<", ">", "<=", ">=", "="};
    for(auto i:op) {
        if(s == i) return true;
    }
    return false;
}

bool isVar(string s) {
    bool flag = false;
    vector<string> keywords = {"int", "float", "double", "if", "else", "for", "return", "long", "while"};
    for(auto i : keywords) {
        if(i == s) return false;
    }
    for(auto i : s) {
        if((i >= 'a' and i <= 'z') or i == '_' or (i >= 'A' and i <= 'Z') or flag) {
            flag = true;
            continue;
        }
        else return false;
    }
    return true;
}

int main() {
    int idx = 1;
    string s;
    map<string, int> symtable;
    while(cin >> s) {
        vector<string> line;
        stringstream ss(s);
        string cur;
        while(ss >> cur) {
            if(isFun(cur)) {
                line.push_back("(");
                line.push_back(")");

            } else if(isVar(cur)) {
                if(symtable.find(cur) == symtable.end()) {
                    symtable[cur] = idx;
                    idx++;
                }
            }
            line.push_back(cur);
        }

        for(auto i : line) {
            if(isKey(i)) {
                cout << "<" << i << "," << "keyword > " << endl;
            } else if(isFun(i)) {
                cout << "<" << i.substr(0, i.size()-2) << "," << "function > " << endl;
            } else if(isVar(i)) {
                cout << "<" << symtable[i] << "," << i << "> " << endl;
            } else if(isNum(i)) {
                cout << "<" << i << "," << "number > " << endl;
            } else if(isOperator(i)) {
                cout << "<" << i << "," << "operator > " << endl;
            } else {
                cout << "<" << i << "," << "symbol >" << endl;
            }
        }
        if(s == "}") break;
    }
}
