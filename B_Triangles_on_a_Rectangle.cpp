#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll w,h,k,x2=0,x3=0;
        cin>>w>>h>>k;
        rep(i,0,k)
        {
            ll r;
            cin>>r;
            if(i==0 || i==k-1)
            {
              x2=x2*-1-r;
            }
        }
        cin>>k;
        rep(i,0,k)
        {
            ll r;
            cin>>r;
             if(i==0 || i==k-1)
            {
              x3=x3*-1-r;
            }
        }
        cin>>k;
        ll y=0,y1=0;
        rep(i,0,k)
        {
            ll r;
            cin>>r;
             if(i==0 || i==k-1)
            {
              y=y*-1-r;
            }
        }
        cin>>k;
        rep(i,0,k)
        {
            ll r;
            cin>>r;
            if(i==0 || i==k-1)
            {
              y1=y1*-1-r;
            }
        }
        ll x=max(-1*x2,-1*x3);
        y=max(-1*y,-1*y1);
        long long a=h*x;
        long long b=w*y;
        if(a>b)
        cout<<a;
        else
        cout<<b;
        cout<<endl;
    }
}