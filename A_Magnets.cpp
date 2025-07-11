//  https://codeforces.com/contest/344/problem/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    // vector<int>
    int a, num, op = 0;
    for(int i = 0; i<n; i++){
        cin >> num;
        if(i == 0){
            a = num;
        }
        if(num == a && i>0){
            continue;
        }else{
            a = num;
            op++;
        }
    }
    cout << op << endl;    
    return 0;
}