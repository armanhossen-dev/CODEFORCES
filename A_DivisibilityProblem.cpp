#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    
    int a , b;
    int cnt = 0;
    
    vector<int> arr(size);

    for(int i = 0 ; i<size; i++){
        cin >> a >> b;
        if(a%b == 0){
            arr[i] = 0;
        }else{
            cnt = 0;
            // while(a%b != 0){ //dont't use terminal to drink, and nested loop makes the time limite accedes
            cnt  = (b - (a%b))%b; 
             
            arr[i] = cnt;
        }
    }
    for(int i : arr){
        cout << i << endl;
    }

    return 0;    
}