#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int binary(vector<pair<int,int>>vect,int size,int target);
int32_t main(void)
{
    int n,q;
    cin>>n>>q;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    while(q--)
    {
        int l,r,p,k;
        cin>>l>>r>>p>>k;
        vector<pair<int,int>>vect;
        unordered_map<int,int>mp;
        for(int i=l-1;i<=r-1;i++)
        {
            vect.push_back(make_pair(arr[i],i));
            mp[arr[i]]++;
        }
        sort(vect.begin(),vect.end());
        int ans=-1;
        int size=vect.size();
        int first=binary(vect,size,p);
        if(mp.at(p)<k)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<vect[first+k-1].second+1<<endl;
        }
    }
}
int binary(vector<pair<int,int>>vect,int size,int target)
{
    int start=0,end=vect.size()-1,first=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(vect[mid].first>=target)
            {
                first=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
    return first;
}