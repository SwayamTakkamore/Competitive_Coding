#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t,i;
    string word;
    cin>>t;
    string k[t];
    for(i=0;i<t;i++){
        cin>>word;
        int len = word.length();
        if(len<=10){
            k[i] = word;
        }
        else{
            char w;
            k[i] = word[0]+to_string(len-2)+word[len-1];
        }
    }
    for(i=0;i<t;i++){
        cout<<k[i]<<endl;
    }
}