#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(void)
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int ans=0;
        ans=(2*t*t*t+3*t*t+t)/6;
        cout<<ans<<endl;
        cin>>t;
    }
}