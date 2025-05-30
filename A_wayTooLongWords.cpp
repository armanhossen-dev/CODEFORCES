#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> words(n);
    for(int i = 0 ; i<n; i++){
        cin >> words[i];
    }
    for(string a : words){
        int len = a.length();
        if(len > 10){
            cout << a[0] << (len-2) << a[len-1] << endl;
        }else{
            cout << a << endl;
        }
    } 
    return 0;
}
//https://codeforces.com/problemset/problem/71/A