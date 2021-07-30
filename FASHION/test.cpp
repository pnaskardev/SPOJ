#include <bits/stdc++.h>
using namespace std;

int main() {
       int t;
       cin>>t;
       while(t--)
       {
           int n;
           cin>>n;
           int m[n],f[n];
           for(int i=0;i<n;i++)
           cin>>m[i];
           for(int j=0;j<n;j++)
           cin>>f[j];
           sort(m,m+n);
           sort(f,f+n);
           int sum=0;
           for(int i=0;i<n;i++)
           sum=sum+m[i]*f[i];
           cout<<sum<<endl;
       }
    return 0;
}