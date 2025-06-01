#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    vector<int> nums(6);
    // Note that you can insert operation signs only between a and b, and between b and c,
    nums[0] = (a + b) * c;
    nums[1] = a * (b + c);
    //// nums[3] = (a + c ) * b; not like this
    nums[2] = a + b * c;
    nums[3] = a * b + c;
    //// nums[5] = a * c + b; not like this
    nums[4] = a * b * c;
    nums[5] = a + b + c;

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    cout << nums[0] << endl;
    
    return 0;
}
// https://codeforces.com/problemset/problem/479/A