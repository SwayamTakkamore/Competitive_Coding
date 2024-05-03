#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    int i;
    int cap=0;
    int small=0;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            cap++;
        }
        if(s[i]>=97 && s[i]<=122){
            small++;
        }
    }
    if(cap>small){
        for(i=0;i<s.size();i++){
            ans[i] = toupper(s[i]);
        }
    }
    else{
        for(i=0;i<s.size();i++){
            ans[i] = tolower(s[i]);
        }
    }
    for(i=0;i<s.size();i++){
        cout<<ans[i];
    }
}