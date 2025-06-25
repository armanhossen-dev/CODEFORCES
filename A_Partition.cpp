//https://codeforces.com/contest/946/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num, b=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (num > 0)
        {
            b += num;
        }
        else
        {
            b += num * (-1);
        }
    }
    cout << b << endl;
    return 0;
}