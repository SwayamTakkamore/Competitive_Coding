#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,i;
    int money=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        money+=(i*k);
    }
    if(n>=money){
        cout<<0;
    }
    else{
        cout<<money-n;
    }
}
