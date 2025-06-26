// https://codeforces.com/contest/118/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    getline(cin,str);

    list<char> sr;
    for(int i = 0; i<str.length(); i++){
        str[i] = tolower(str[i]);
        if( str[i] == 'a' ||
            str[i] == 'e' || 
            str[i] == 'i' || 
            str[i] == 'o' || 
            str[i] == 'u' || 
            str[i] == 'y'  ){
                // str[i] = '.';
            }else{
                sr.push_back(str[i]);
            }
    }
    for(char ch : sr){
        cout << '.';
        cout << ch;
    }cout << endl;
    return 0;
}