#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(void)
{
    int columns;
    cin>>columns;
    string s;
    cin>>s;
    int rows=s.length()/columns,row_counter=0,car=0;
    for(int i=0;i<s.length();i=i+columns)
    {
        if(car==1)
        {
            row_counter++;
        }
        if(row_counter==0)
        {
            cout<<s[i]<<" ";
            car=1;
        }
        if(row_counter>=1)
        {
            cout<<s[i+5]<<" ";
        }
    }
}