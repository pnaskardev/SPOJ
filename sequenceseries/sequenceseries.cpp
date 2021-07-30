#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
float commondiff(float x,float y,float z);
float commonrat(float p,float q,float r);   
int main(void)
{
    float a,b,c;
    cin>>a>>b>>c;
    while(true)
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        if((a+c)/2.0==b)
        {
            float difference=commondiff(a,b,c);
            cout<<"AP"<<" "<<c+difference<<endl;
        }
        else if(b*b==a*c)
        {
            float ratio=commonrat(a,b,c);
            cout<<"GP"<<" "<<c*ratio<<endl;
        }
        cin>>a>>b>>c;
    }
        
}    
float commondiff(float x,float y,float z)
{
    float difference;
    float d1=y-x;
    float d2=z-y;
    if(d1==d2)
    {
        difference=d1;
    }
    return difference;
}
float commonrat(float p,float q,float r)
{
    float r1=q/p;
    float r2=r/q;
    float ratio;
    if(r1==r2)
    {
        ratio=r1;
    }

    return ratio;
}