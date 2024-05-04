#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    int k=1;
    int ncount=0;
    int count=0;
    vector<int> b;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
            ncount++;
        }
        if(ncount==3){
            b.push_back(count);
            k++;
            ncount=1;
            count=0;
        }
        count++;
        if(i==n-1){
            b.push_back(count);
            break;
        }
    }
    cout<<k<<endl;
    for(i=0;i<k;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}