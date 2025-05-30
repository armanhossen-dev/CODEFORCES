#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    //even  && more than 4 for positive an even divide
    if(num%2 == 0 && num >= 4){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
// https://codeforces.com/problemset/problem/4/A 