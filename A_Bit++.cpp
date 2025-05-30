#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 0;
    string str;
    for(int i = 1; i<= n; i++){
        cin >> str ;
        if(str == "--X" || str == "X--"){
            x--;
        }else if(str == "++X" || str == "X++"){
            x++;
        }
    }
    cout << x << endl;
    return 0;
}
// https://codeforces.com/problemset/problem/282/A 
