// https://codeforces.com/contest/1030/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num, b = 0;
    for (int i = 1; i <= n; i++){
        cin >> num;
        b += num;
    }
    if (b == 0){
        cout << "EASY" << endl;
    }
    else{
        cout << "HARD" << endl;
    }
    return 0;
}