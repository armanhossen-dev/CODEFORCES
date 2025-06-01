#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    
    long long a , b;
    long long cnt = 0;
    
    vector<long long> arr(size);

    for(long long i = 0 ; i<size; i++){
        cin >> a >> b;
        if(a%b == 0){
            arr[i] = 0;
        }else{
            cnt = 0;
            cnt  = (b - (a%b));              
            arr[i] = cnt;
        }
    }
    for(long long i : arr){
        cout << i << endl;
    }
    return 0;    
}
// https://codeforces.com/contest/1328/problem/A