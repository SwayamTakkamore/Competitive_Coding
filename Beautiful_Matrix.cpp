#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    int count=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1){
                if(j>2){
                    count++;
                    int t = a[i][j];
                    a[i][j] = a[i][j-1];
                    a[i][j-1] = t;
                    j=0;
                }
                else if(j<2){
                    count++;
                    int t = a[i][j];
                    a[i][j] = a[i][j+1];
                    a[i][j+1] = t;
                    j=0;
                }
                else if(i>2){
                    count++;
                    int t = a[i][j];
                    a[i][j] = a[i-1][j];
                    a[i-1][j] = t;
                    i=0;
                }
                else if(i<2){
                    count++;
                    int t = a[i][j];
                    a[i][j] = a[i+1][j];
                    a[i+1][j] = t;
                    i=0;
                }
            }
        }
    }
    cout<<count;
}