#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    long long n;
    cin>>n;
    int a[n],i=0;
    while(n--)
    {
        double t,t1,r,r1;
        cin>>t>>t1>>r>>r1;
        if((pow(t,2)/pow(t1,2))==(pow(r,3)/pow(r1,3)))
        a[i]=1;
        else
        a[i]=0;
        i++;
    }
    rep(j,0,sizeof(a)/sizeof(a[0]))
    {
        if(a[j])
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";
    }
}