#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,u,a,m=0,temp=0;
        cin>>l>>u>>a;
        if(u%a==0)
        {
            if(u-1>=l and a!=1)
            u--;
        }
        else
        {
            if((u+1)%a==0)
             ;
            else
            {
                
                temp=u;
                u=((int)u/a)*a -1;
                if(u<l)
                u=temp;
            }
        }
        m=(int)u/a+u%a;
        if(l<a)
        {if(m<a-1 and (l<=a-1 and a-1<=u))
        m=a-1;}
        cout<<m<<'\n';
    }
}