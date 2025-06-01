#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string given = "codeforces";
    char ch;
    vector<bool>  isfound(n);
    for(int i = 0; i<n; i++){
        cin >> ch;
        switch (tolower(ch)){
        case 'c':
            isfound[i] = 1;
            break;
        case 'o':
            isfound[i] = 1;
            break;
        case 'd':
            isfound[i] = 1;
            break;
        case 'e':
            isfound[i] = 1;
            break;
        case 'f':
            isfound[i] = 1;
            break;
        case 'r':
            isfound[i] = 1;
            break;
        case 's':
            isfound[i] = 1;
            break;
        default:
            isfound[i] = 0;
            break;
        }
    }
    for(bool a : isfound){
        if(a){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
//  https://codeforces.com/contest/1791/problem/A