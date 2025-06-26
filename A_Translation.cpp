// https://codeforces.com/contest/41/problem/A
#include<iostream>
using namespace std;
int main(){
    string n1;
    string n2;
    getline(cin, n1);
    getline(cin, n2);
    int len1 = n1.length();
    int len2 = n2.length();
    //cout << len1 << endl;
    //cout << len2 << endl;
    string rev = n1;
    int l = len1-1;
    if(len1 == len2){
        for(int i = 0; i<len1; i++){
            rev[l] = n1[i];
            l--;
        }
    }
    if(rev == n2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }   
    return 0;
}