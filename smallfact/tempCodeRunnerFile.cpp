#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long factorial(long long intger);
int main(void)
{
    int test;
    cin>>test;
    long long testarray[test];
    for(int i=0;i<test;i++)
    {
        cin>>testarray[i];
    }
    for(int i=0;i<test;i++)
    {
        cout<<factorial(testarray[i])<<endl;
    }

}
long long factorial(long long integer)
{
    int mul=1;
    for(int i=1;i<=integer;i++)
    {
        mul=mul*i;
    }
    return (long long)mul;
}