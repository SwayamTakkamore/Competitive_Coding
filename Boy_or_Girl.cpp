#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int i,j;
    int flag=0;
    int count=0;
    cin>>a;
    for(i=0;i<a.size();i++){
        for(j=i;j<a.size()-1;j++){
            if(a[j+1]==a[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
        else{
            flag=0;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
