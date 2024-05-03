#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,i,j;
    cin>>w;
    if(w==2 || w==0){
        cout<<"NO";
    }
    else{
        if(w%2==0){
            cout<<"YES";
            exit(0);
        }
        cout<<"NO";
    }
}