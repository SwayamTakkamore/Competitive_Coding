#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    int one,zero,count=0;
    cin>>n;
    int a[n][3];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
        for(j=0;j<3;j++){
            if(a[i][j]==0)
                zero++;
            if(a[i][j]==1)
                one++;
        }
        if(one>zero)
            count++;
        zero=0;
        one=0;
    }
    cout<<count;
}