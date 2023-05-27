#include <iostream>
#include <regex>
#include <vector>
using namespace std;

vector<string> Keywords={"main","int","double","float","char","if","else","for","do","while","return"};
vector<string> Operators = {"+","-","*","/","%","=","&&","||","!","|","&","~"};
vector<string> Symbols = {",",";","{","}","(",")","[","]"};
regex numberPattern("[0-9]+\\.?[0-9]*");
regex identifierPattern("^[a-zA-Z_][a-zA-Z0-9_]*$");

bool isKeyword(string word){
    auto lx = find(Keywords.begin(),Keywords.end(),word);
    if(lx != Keywords.end())
        return true;
    return false;
}

bool isOperator(string word){
    auto ky = find(Operators.begin(),Operators.end(),word);
    if(ky!=Operators.end())
        return true;
    return false;
}

bool isSymbol(string word){
    auto sy = find(Symbols.begin(),Symbols.end(),word);
    if(sy!=Symbols.end())
        return true;
    return false;
}

bool isNumber(string word){
    return regex_match(word,numberPattern);
}

bool isIdentifier(string word){
    return regex_match(word,identifierPattern);
}

int main(int argc, const char * argv[]) {
    string line;
    while(getline(cin,line)) {
        string word;
        int i=0,LN = (int)line.length();
        do{
            word += line[i];
            if(isKeyword(word)||isOperator(word)||isSymbol(word)||isNumber(word)||isIdentifier(word)){
                i++;
            }
            else{
                string prevword;
                prevword.assign(word.begin(),word.end()-1);
                if(isKeyword(prevword)){
                    cout<< prevword <<": Keyword"<<endl;
                    word.assign(word.end()-1,word.end());
                }
                else if (isOperator(prevword)){
                    cout<< prevword <<": Operator"<<endl;
                    word.assign(word.end()-1,word.end());
                }
                else if (isSymbol(prevword)){
                    cout<< prevword <<": Symbol"<<endl;
                    word.assign(word.end()-1,word.end());
                }
                else if (isNumber(prevword)){
                    cout<< prevword <<": Number"<<endl;
                    word.assign(word.end()-1,word.end());
                }
                else if (isIdentifier(prevword)){
                    cout<< prevword <<": Identifier"<<endl;
                    word.assign(word.end()-1,word.end());
                }
                else{
                    word.assign(word.end()-1,word.end());
                }
                i++;
            }
        }while(i!=LN+1);
    }
    return 0;
}

