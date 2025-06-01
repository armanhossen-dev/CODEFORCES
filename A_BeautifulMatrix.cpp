#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int a = 0, b = 0;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                a = i;
                b = j;
            }
        }
    }
    int count = 0;
    /* to make the '1' center in the matrix , 
      idx 0 1 2 3 4
        0 0 0 0 0 0 
        1 0 0 0 0 0 
        2 0 0 1 0 0 
        3 0 0 0 0 0 
        4 0 0 0 0 0  
    so i have to make a  = 2, b = 2
    */
   if(a == 2 && b == 2){
     cout <<  0 << endl;
   }else{
            if(a > 2){
                count += a-2;
            }
            if(a < 2){
                count += 2-a;
            }
            if(b > 2){
                count += b-2;
            }
            if(b < 2){
                count += 2-b;
            }
            cout << count << endl;
            // cout << a  << " " << b << endl;
    }
    return 0;
}
//  https://codeforces.com/contest/263/problem/A