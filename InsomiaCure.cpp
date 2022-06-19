#include <iostream>
#include <vector>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std ;
int main()
{
    int l1=0,r1=0;
    int a;
    cin>> a;
    rep(i,0,a)
    {
        int g;
        cin>>g;
        if(g==1)
        l1++;
        cin >> g;
        if(g==1)
        r1++;
    }
    int t=0;
    if(r1>=a/2+1)
    {
       t=t+(a-r1);
    }
    else
    t+=r1;
    if(l1>=a/2+1)
    t+=(a-l1);
    else
    t+=l1;
    cout << t;
    return 0;
}