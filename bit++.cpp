#include<iostream>
using namespace std;

int main(){
    int x,n,i;
    cin>>n;
    string d;
    int count=0;
    for(i=0;i<n;i++){
        cin>>d;
        if(d=="++X" || d=="X++"){
            count++;
        }
        else if(d=="--X" || d=="X--"){
            count--;
        }
    }
    cout<<count;
}
