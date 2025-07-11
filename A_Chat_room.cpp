// https://codeforces.com/contest/58/problem/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    string f = "hello";
    int j = 0;

    cin >> s;
        
    for (int i = 0; i < s.size(); i++){
        if (s[i] == f[j]){
            j++;
            if (j == 5){
                break;
            }
        }
    }
    
    if (j == 5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}