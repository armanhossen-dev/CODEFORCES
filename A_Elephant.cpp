#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[5] = {1,2,3,4,5};
    int num,n;
    cin >> num;
    int count = 0;
    for(int i = 4; i>-1; i--){
        if(num >= ar[i]){
            n = num % ar[i];
            int vag = num / ar[i];
            count += vag;
            num = n;
        }
    }
    cout << count << endl;
    return 0;
}