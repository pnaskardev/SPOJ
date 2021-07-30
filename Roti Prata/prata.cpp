#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool formula(vector<int>arr,int n,int p,int mid);
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
    int p,n;
    cin>>p;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int start=0,end=1e8,ans=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2; //time
        if(formula(arr,n,p,mid)==true)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    cout<<ans<<endl;
}
bool formula(vector<int>arr,int n,int p,int mid)
{
    int time=0;
    int prata=0;
    for(int i=0;i<n;i++)
    {
        int j=2;
        time=arr[i];
        while(time<=mid)
        {
            prata++;
            time=time+(arr[i]*j);
            j++;
        }
        
    }
    if(prata>=p)
    {
        return true;
    }
    else
    {
        return false;
    }
}