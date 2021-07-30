#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void addrev(int a,int b);
void rev(int ans);
int32_t main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        addrev(a,b);
    }
}
void addrev(int a,int b)
{
    int ra=0,rb=0;
    while(a!=0)
    {
        int rem=a%10;
        ra=ra*10+rem;
        a=a/10;
    }
    while(b!=0)
    {
        int rem=b%10;
        rb=rb*10+rem;
        b=b/10;
    }
    rev(ra+rb);
}
void rev(int ans)
{
    int final=0;
    while(ans!=0)
    {
        int rem=ans%10;
        final=final*10+rem;
        ans=ans/10;
    }
    cout<<final<<endl;
}