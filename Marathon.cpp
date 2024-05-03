#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    int a[4];
    int countar[t];
    for(j=0;j<t;j++)
    {
        for(i=0;i<4;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(i=0;i<4;i++)
        {
            if(i>0 && a[i]>a[0])
            {
                count++;
            }
        }
        countar[j] = count;
    }
    for(j=0;j<t;j++)
    {
        cout<<countar[j]<<endl;
    }
    return 0;
}