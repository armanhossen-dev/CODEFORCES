// A Candies and Two Sisters 
// https://codeforces.com/problemset/problem/1335/A
// formula for every number, op[i] =  input[i]-1/2

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int output[10000], num;
    for(int i = 0; i<n; i++){
        scanf("%d",&num);
        output[i] =( num - 1 )/ 2;
    }
    for(int j = 0; j<n; j++){
        printf("%d\n",output[j]);
    }
    return 0;
}