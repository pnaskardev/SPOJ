#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
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
    int n,k;
    cin>>n>>k;
    vector<int>arr;
    int i=0;
    for(i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    int sum=0,counter=0;
    for(int j=0;j<i;j++)
    {
        if(binary_search(arr.begin(),arr.end(),arr[j]+k))
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}
