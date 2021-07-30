#include<iostream>
#include<bits/stdc++.h>
#define int long long int 
using namespace std;
bool cut(int mid,int n,vector<int>arr,int m);
int32_t main(void)
{
    int n,m,max_el;
    cin>>n>>m;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    max_el=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max_el)
        {
            max_el=arr[i];
        }
    }
    int start=0,end=max_el,ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(cut(mid,n,arr,m)==true)
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
bool cut(int mid,int n,vector<int>arr,int m)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]-mid)<0)
        {
            continue;
        }
        else
        {
            sum=sum+(arr[i]-mid);
        }
    }
    if(sum>=m)
    {
        return true;
    }
    else
    {
        return false;
    }
}