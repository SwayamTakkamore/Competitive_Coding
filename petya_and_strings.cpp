#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int count = 0;
    int i;
    for(i=0;i<a.size();i++){
        if(tolower(a[i])>tolower(b[i]))
        {
            count++;
            break;
        }
        if(tolower(a[i])<tolower(b[i]))
        {
            count--;
            break;
        }
    }
    cout<<count;
}