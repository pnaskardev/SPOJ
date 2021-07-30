#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int power(int a,int b,int p);
int32_t main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        cout<<power(a,b,10)<<endl;
    }
}
int power(int a,int b,int p)
{
    int result=1;
    if(a%p==0)
    {
        return 0;
    }
    while(b>0)
    {
        if(b%2!=0)
        {
            result=(result*a)%p;
        }
        b=b/2;
        a=(a*a)%p;
    }
    return result;
}
