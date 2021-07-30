#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
bool isAP(int a,int b,int c);
bool isGP(int arr[3]);
int32_t main(void)
{
    int a,b,c;
    while(true)
    {
        cin>>a>>b>>c;
        if(!(a==0&&b==0&&c==0))
        {
            if(isAP(a,b,c)==true)
            {
                int d=b-a;//common difference
                cout<<"AP "<<c+d<<endl;
            }
            else
            {
                int d=(float)b/a;
                cout<<"GP "<<c*d<<endl;
            }
        }
        else 
        {
            break;
        }
    }   
}
bool isAP(int a,int b,int c)
{
    if((b-a)==(c-b))
    {
        return true;
    }
    else
    {
        return false;
    }
}