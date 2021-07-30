#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool place(int c,int n,vector<int>arr,int sep);
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
    int n,c;
    cin>>n>>c;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    int start=0,end=arr[n-1]-arr[0],ans=0;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        bool canplace=place(c,n,arr,mid);
        if(canplace==true)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    cout<<ans<<endl;
}
bool place(int c,int n,vector<int>arr,int sep)
{
    int cows=1;
    int location=arr[0];
    for(int i=1;i<n;i++)
    {
        int current_loc=arr[i];
        if((current_loc-location)>=sep)
        {
            location=current_loc;
            cows++;
            if(cows==c)
            {
                return true;
            }
        }
    }
    return false;
}