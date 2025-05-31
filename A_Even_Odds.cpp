#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n, k;
    cin >> n >> k;

    // nth odd number = 2*n-1
    // nth even number = 2*n
    
    //making sure where the number is, by its position k-th
    // half of the array will be the fill with  of odd values in the first 
    unsigned long long findHowManyOdd;
    if(n%2 ==0){
        findHowManyOdd =  (n)/2; 
    }else{
        findHowManyOdd =  (n+1)/2; 
    }
    //cout << "findHowManyOdd : "<< findHowManyOdd << endl;
    // if n = 3, then (3+1)/2 = 2. there is two odd between 1-3, 
    // now  1,2,3= 1,3 is odd
    // if n = 4  then 5/2 = integer return, so retrn will be  2 
    
    if(k <= findHowManyOdd){
        cout << (2*k)-1 << endl;
    }
    if(k > findHowManyOdd){
        cout << 2 * (k-findHowManyOdd);
    }  
    return 0;
}

// https://codeforces.com/problemset/problem/318/A