// https://codeforces.com/contest/723/problem/A
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> v;

    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);

    sort(v.begin(), v.end());
    int count = 0;
    count += v[2]-v[1];
    count += v[1]-v[0];
    // for(int i : v){
    //     cout << i << " " ;
    // }
    cout << count << endl;


    return 0;
}