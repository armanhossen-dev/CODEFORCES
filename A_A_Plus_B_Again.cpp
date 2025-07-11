// https://codeforces.com/contest/1999/problem/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    // int op[n],num,a,b;
    vector<int> op(n);
    int num;
    for(int i = 0; i<n; i++){
        cin >> num;
        // a = num/10;
        // b = num%10;
        // op[i] = a + b;
        op[i] = num/10 + num%10;
    }
    for(int i = 0; i<n; i++){
        cout << op[i] << '\n';
    }    
    return 0;
}