#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    int n,m,r;
    cin>>n>>m;
    r=n;
    vector<int>seats,s1;
    rep(i,0,m)
    {
        int a;
        cin>>a;
        seats.push_back(a);
        s1.push_back(a);
    }
    int max=0,min=0;
    while(n)
    {
       sort(seats.begin(),seats.end());
       int a;
       rep(i,0,m)
       {
         if(seats[i])
         {
             a=seats[i];
             seats[i]--;
             break;
         }
       }
       min=min+a;
       n--;
    }
    n=r;
    while(n)
    {
        sort(s1.begin(),s1.end());
        int a=s1[m-1];
        s1[m-1]--;
        max=max+a;
        n--;
    }
    cout<<max<<" "<<min;
}