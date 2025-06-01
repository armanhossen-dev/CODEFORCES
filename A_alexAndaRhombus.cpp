#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long sum = 1;
    if(n >= 2){
        sum = n*n + (n-1)*(n-1);
    }
    cout << sum << endl;
    // 11 then 221 = 11*11 + 10*10
    return 0;
}
//  https://codeforces.com/contest/1180/problem/A
