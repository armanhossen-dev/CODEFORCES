#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, k;
    cin >> num >> k;
    for(int i = 1 ; i <= k ; i++ ){
        //if last digit is zero then divide by 10, 
        // if not then -1 each time from total number
        if(num % 10 == 0){
            num = num / 10;
        }else{
            num --;
        }
    }
    cout << num << endl;
    return 0;    
}
// https://codeforces.com/problemset/problem/977/A 