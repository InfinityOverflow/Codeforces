#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<utility>
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
        ll n;
        cin>>n;
        int c=0;
        rep(i,0,n)
        {
            int r;
            cin>>r;
            if(r%2)
            {
                c++;
            }
        }
        int d=n-c;
        cout<<min(c,d)<<endl;
    }
}