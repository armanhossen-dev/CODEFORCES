//  A. Holiday Of Equality
// https://codeforces.com/contest/758/problem/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, op = 0;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i<n-1; i++){
        op += (nums[n-1] - nums[i]);
    }
    cout << op << endl;
    return 0;
}