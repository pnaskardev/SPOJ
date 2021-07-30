#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void print_subset(int arr[],int start,int end, vector<int>&v);
int32_t main(void)
{
    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>v1,v2;
    print_subset(arr,0,(n/2)-1,v1);
    print_subset(arr,(n/2),n-1,v2);
    sort(v2.begin(),v2.end());
    int count=0;
    for(int i=0;i<v1.size();i++)
    {
        int low=lower_bound(v2.begin(),v2.end(),l-v1[i])-v2.begin();
        int high=upper_bound(v2.begin(),v2.end(),r-v1[i])-v2.begin();
        count=count+(high-low);
    }
    cout<<count<<endl;
}
void print_subset(int arr[],int start,int end, vector<int>&v)
{
    int sum=0;
    int n=end-start+1;
    for(int i=0;i<(1<<n);i++)
    {
        sum=0;
        int j=start;
        int x=i;
        while(x)
        {
            int m=x&1;
            if(m)
            {
                sum=sum+arr[j];
            }
            j++;
            x=x>>1;
        }
        v.push_back(sum);
    }
}