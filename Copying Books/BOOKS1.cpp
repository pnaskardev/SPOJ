//not accepted
#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool place(int books,int k,vector<int>pages,int maxpage);
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
bool place(int books,int k,vector<int>pages,int maxpage)
{
    int scribers=1;
    int sum=0;
    for(int i=0;i<books;i++)
    {
        if(pages[i]>maxpage)
        {
            return false;
        }
        if(sum+pages[i]>maxpage)
        {
            scribers++;
            sum=pages[i];
            if(scribers>k)
            {
                return false;
            }
        }
        else
        {
            sum=sum+pages[i];
        }
    }
    return true;
}
void solve()
{
    int m,k,ans=-1;
    cin>>m>>k;
    vector<int>arr;
    int end=0;
    for(int i=0;i<m;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
        end=end+t;
    }
    sort(arr.begin(),arr.end());
    int start=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        bool canplace=place(m,k,arr,mid);
        if(canplace==true)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    vector<int>slash(m,false);
    int sum=0,cnt=1;
    for(int i=m-1;i>=0;i--)
    {
        /*if(sum+arr[i]<=ans && (i >= k))
        {
            sum=sum+arr[i];
        }
        else
        {
            slash[i]=true;
            k--;
            sum=arr[i];
        }*/
        sum=sum+arr[i];
        if(sum>=ans && (i+1<=k))
        {
            sum=arr[i];
            slash[i]=true;
            k--;
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
        if(slash[i]==true)
        {
            cout<<"/ ";
        }
    }
    cout<<endl;
}
