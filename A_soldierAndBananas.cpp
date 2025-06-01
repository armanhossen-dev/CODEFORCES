#include<bits/stdc++.h>
using namespace std;

int main(){
    //he has to pay i·k dollars for the i-th banana
    int k,w;
    long long n;
    
    cin >> k >> n >> w;
    // the cost of the first banana = k
    // initial number of dollars the soldier has  = n
    //  and number of bananas he wants.= w
    long long  calcMoney = 0;
    // long long  Borrow = 0;
    for(int i = 1; i<= w; i++){
        calcMoney += i*k;
    }
    if(calcMoney <= n){
        cout << 0 << endl;
    }
    else{
        cout << (calcMoney-n) << endl;
    }    
    return 0;
}

//  https://codeforces.com/contest/546/problem/A
    