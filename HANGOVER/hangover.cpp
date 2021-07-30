#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sol(double t);
int main(void)
{
    double t;
    cin>>t;
    while(t!=0.00)
    {
        //code
        sol(t);
        cin>>t;
    }
}
void sol(double t)
{
    int a=2;
    double sum=0;
    while(sum<t)
    {
        sum=sum+1.00/a;
        a++;
    }
    cout<<a-2<<" "<<"card(s)"<<endl;
}