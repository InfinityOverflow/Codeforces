#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n,k=0,l=0,min=0,max=0;
       cin>>n;
       if(n%2)
       {
           cout<<-1<<endl;
           continue;
       }
       min=ceil((double)n/6);
       max=floor((double)n/4);
       if(!min)
       min=max;
       if(!max)
       {
           cout<<"-1"<<endl;
           continue;
       }
       cout<<min<<" "<<max<<endl;
    }
}