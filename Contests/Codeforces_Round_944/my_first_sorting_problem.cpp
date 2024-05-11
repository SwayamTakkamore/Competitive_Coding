#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<endl;
    }
}