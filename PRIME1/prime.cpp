#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isprime(int num);
int main (void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(isprime(i))
            {
                if(i==1)
                {
                    continue;
                }
                cout<<i<<endl;
            }
        }
    }
}
bool isprime(int num)
    {
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                return false;
            }
        }
        return true;
    }