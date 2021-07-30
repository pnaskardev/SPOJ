#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
}
void solve()
{
    int n;
    cin>>n;
    int result=192+(n-1)*250;
    cout<<result<<endl;
}