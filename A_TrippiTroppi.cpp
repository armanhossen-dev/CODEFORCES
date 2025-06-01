#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    cin.ignore();

    string demo,str;
    vector<string> n_str(n);
    for(int i = 0 ; i<n; i++){
        demo = "";
        getline(cin, n_str[i]);

        str = n_str[i];
        demo = str[0];

        for(int k = 0; k<str.length(); k++){
            if(str[k] == ' '){
                demo+= str[k+1];
            }
        }
        n_str[i] = demo;
    }
    for(string ch : n_str){
        cout << ch << endl;
    }
    return 0;
}
// https://codeforces.com/contest/2094/problem/A