#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,aisodd=0,bisodd=0;
        cin>>a>>b;
        if(b==a||b==a-2)
        {
            if(a%2!=0)
            {
                aisodd=1;
            }
            if(b%2!=0)
            {
                bisodd=1;
            }
            if(aisodd==0&&bisodd==0)
            {
                cout<<a+b<<endl;
            }
            else if(aisodd==1&&bisodd==1)
            {
                int ans=a+b;
                cout<<ans-1<<endl;
            }
        }
        else
        {
            cout<<"No Number"<<endl;
        }
        
       
    }
}