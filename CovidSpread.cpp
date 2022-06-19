#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        ll n,d,p;
        p=0;
        cin>>n>>d;
        rep(i,0,d+1)
        {
            if(i==0)
            p=1;
            else if(i<11)
            p*=2;
            else
            p*=3;  
            if(p>n)
            break;
        }
        if(p<n)
        cout<<p<<"\n";
        else
        cout<<n<<"\n";
    }
    return 0;
}