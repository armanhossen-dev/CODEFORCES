//https://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    int u, l;
    cin >> word;
    
    int len = word.length();
    l = u = 0;
    char ch;

    for(int i = 0; i<len ; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            u++;
        }
        if(word[i] >= 'a' && word[i] <= 'z'){
            l++;
        }
    }
    // cout << "l = " << l << '\n'
    //      << "u = " << u << endl;
    
    if(l>u){
        for(int k = 0; k<len; k++){
            word[k] = tolower(word[k]);
        }
    }else if (l == u){
        for(int k = 0; k<len; k++){
            word[k] = tolower(word[k]);
        }
    }
    
    if(u>l){
        for(int k = 0; k<len; k++){
            word[k] = toupper(word[k]);
        }
    }

    cout << word << endl;
    return 0;
}