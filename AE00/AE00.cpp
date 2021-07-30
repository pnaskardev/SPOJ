#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(void)
{
    int n,counter=0;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++)
    {
        for(int j=1+i;j*i<=n;j++)
        {
            counter++;
        }
    }
    counter=counter+sqrt(n);
    cout<<counter<<endl;
}
