#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int rev_num(int integer);
int sum(int x, int y);
int main (void)
{
    int test;
    cin>>test;
    int array[test][2];
    int temparray[test][2];
    int basicsum[test];
    int reversednum[test];
    for(int i=0;i<test;i++)//populate the 2-d array
    {
        for(int j=0;j<2;j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0;i<test;i++)//call function and pass on the vaues of the array one by one not passing the whole array
    {
        for(int j=0;j<2;j++)
        {
            int a=0;
            a=rev_num(array[i][j]);//receive thev value and print them 
            temparray[i][j]=a;//populate temparray with reversed numbers 
        }
    }
    for(int i=0;i<test;i++)
    {
            basicsum[i]=sum(temparray[i][0],temparray[i][1]);
    }
    for(int i=0;i<test;i++)
    {
        reversednum[i]=rev_num(basicsum[i]);
    }
    for(int j=0;j<test;j++)
    {
        cout<<reversednum[j]<<endl;
    }
}
int rev_num(int integer)
    {
        int rev_num=0;
        for(int i=0;i<3;i++)
        {
             while(integer>0)
             {
                 rev_num = rev_num*10 + integer%10;
                 integer=integer/10; 
                 
             }
              
        }
        return rev_num;
       
    }
    int sum(int x,int y)
    {
        int sum;
        sum=x+y;
        return (long)sum;
    }
