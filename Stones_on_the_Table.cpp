#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    int count = 0;
    string a;
    cin>>n>>a;
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}