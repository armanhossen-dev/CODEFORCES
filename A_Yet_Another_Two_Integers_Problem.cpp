// https://codeforces.com/contest/1409/problem/A
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int a, b;
    int fix[10] = {1,2,3,4,5,6,7,8,9,10};

    vector<int> op(n);

    for(int i = 0; i<n; i++){
        cin >> a >> b;
        if(a = b){
            op[i] = 0;
        }
    //     if(a < b){
    //         for(int i = 9; i>=0; i--){
    //             if(fix[i])+ a <= a ){
    //             a += fix[i];
    //         }
    //         }
    //     }
    // }


// Input
// The first line of the input contains one integer t
// (1≤t≤2⋅104
// ) — the number of test cases. Then t
// test cases follow.

// The only line of the test case contains two integers a
// and b
// (1≤a,b≤109
// ).

// Output
// For each test case, print the answer: the minimum number of moves required to obtain b
// from a
// .
    return 0;
}