#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin , str);

    char ch;
    int yep = 0;
    for(int i = 0; i<str.length(); i++){
        ch = str[i];
        if(ch>=33 && ch<=126){
        switch(ch){
                case 'H' :
                    yep++;
                    break;    
                case 'Q' :
                    yep++;
                    break;    
                case '9' :
                    yep++;
                    break;    
        }
        }
    }
    if(yep!=0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
// https://codeforces.com/problemset/problem/133/A