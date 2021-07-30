#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void power(int a,int b,int n);
int32_t main(void)
{
    int a,b;
    cin>>a>>b;
    power(a,b,1000000007);
}
void power(int a,int b,int n)
{
    int res=1;
    while(b>0)
    {
        if(b%2!=0)
        {
            res=(res*a%n)%n;

        }
        a=(a%n*a%n)%n;
        b=b/2;
    }
    cout<<res<<endl;
}