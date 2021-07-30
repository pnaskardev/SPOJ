#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
#define int long long int
#define max 500
void factorial(int number);
int multiply(int x,int res[],int res_size);
int32_t main(void)
{
    int test,number;
    cin>>test;
    while(test--)
    {
        cin>>number;
        factorial(number);
    }
}
void factorial(int n)
{
    int res[max];
    res[0]=1;
    int res_size=1;
    for(int x=2;x<=n;x++)
    {
        res_size=multiply(x,res,res_size);
    }
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }
    cout<<endl;
}
int multiply(int x,int res[],int res_size)
{
    int carry=0,product;
    for(int i=0;i<res_size;i++)
    {
        product=res[i]*x+carry;
        res[i]=product%10;
        carry=product/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}