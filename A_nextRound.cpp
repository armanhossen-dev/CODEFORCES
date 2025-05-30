#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    int nextRound = 0;
    cin >> n >> k;
    vector<int> scores(n);
    for(int i = 0; i<n; i++){
        cin >> scores[i];
    }
    for(int a : scores){
        if((a >= scores[k-1]) && (a > 0)){
            nextRound++;
        }
    }
    cout << nextRound << endl;
    return 0;
}
// https://codeforces.com/problemset/problem/158/A