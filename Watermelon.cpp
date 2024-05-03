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
        for(i=0;i<=w;i++){
            for(j=0;j<=w;j++){
                if(i+j==w)
                {
                    if(i%2==0 && j%2==0){
                        cout<<"YES";
                        exit(0);
                    }
                }
            }
        }
        cout<<"NO";
    }
}