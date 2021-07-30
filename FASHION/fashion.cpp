#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
#define int long long int
int32_t main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int participant,max;
        cin>>participant;
        vector<int> male(participant);
        vector<int> female(participant);
        for(int i=0;i<participant;i++)
        {
           cin>>male[i];
        }
        for(int j=0;j<participant;j++)
        {
            cin>>female[j];
        }
        sort(male.begin(),male.end());
        sort(female.begin(),female.end());
        int sum=0;
        for(int i=0;i<participant;i++)
        {
            sum=sum+(male[i]*female[i]);
        }
        cout<<sum<<endl;
    }
    return 0;

}
