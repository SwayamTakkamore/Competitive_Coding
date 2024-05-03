#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>> a;
    cin>> b;
    int flag = 1;
    int i,j;
    for(i=0;i<a.size();i++){
            if(a[i] == b[a.size()-i-1]){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}