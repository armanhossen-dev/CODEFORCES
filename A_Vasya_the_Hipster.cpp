//  https://codeforces.com/contest/581/problem/A 
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a>b){
        cout << b << " " << (a-b)/2 << endl;
    }else{
        cout << a << " " << (b-a)/2 << endl;
    }
    return 0;
}