#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    int i;
    int cap=0;
    int small=0;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(isupper(s[i])){
            cap++;
        }
        else{
            small++;
        }
    }
    if(cap>small){
        for(i=0;i<s.size();i++){
            ans.push_back(toupper(s[i]));
        }
    }
    else{
        for(i=0;i<s.size();i++){
            ans.push_back(tolower(s[i]));
        }
    }
    cout<<ans;
    return 0;
}