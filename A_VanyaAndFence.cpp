// https://codeforces.com/contest/677/problem/A
#include<iostream>
using namespace std;
int main(){
    int n, target;
    int num;
    int c = 0;
    cin >> n >> target;
    for(int i = 0; i<n; i++){
        cin >> num;
        if(num<=target){
            c++;
        }else{
            c += 2;
        }
    }
    cout << c << endl;
    return 0;
}