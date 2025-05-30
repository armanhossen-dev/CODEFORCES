#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, sum  = 0;
    cin >> n;
    // this works but it makes the - Time limit exceeded on test    
    // for(int i = 1; i<=n; i++){
    //     sum += i * pow((-1),i);
    // }
    
    // -1 + 2 - 3 + 4 .... 
    //for n = even, sum = n/2
    //for n = odd, sum = -(n+1)/2
    if(n%2 == 0){
        sum = n / 2;
    }else{
        sum = -(n+1)/2;
    }
    cout << sum << endl;
    return 0;
}

// https://codeforces.com/problemset/problem/486/A