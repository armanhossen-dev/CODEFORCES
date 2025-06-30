// https://codeforces.com/contest/200/problem/B

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>  //for fixed digits aftre decimal point

using namespace std;

int main(){
    double n;
    cin >> n;
    
    double num = 0, sum = 0;
    for(int i = 0; i<n; i++){
        cin >> num;
        sum += num;
        
    }
    double fact = (n-1)/n;   
    double result = fact * (sum) * (n-1);
    result -= (n-1)*100;

    // if(result < 0){
    //     result = sum/n;
    // }
    
    cout << fixed << setprecision(12) <<result << endl;
    // cout << fixed << setprecision(15) << value << endl;


    return 0;
}