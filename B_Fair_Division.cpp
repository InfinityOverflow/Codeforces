#include <tuple>
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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,o=0,t=0;
        cin>>n;
        //vector<int>v;
        rep(i,0,n)
        {
            int r;
            cin>>r;
            if(r==1)
            o++;
            else
            t++;
        }
        if(o==2*t)
        cout<<"YES"<<endl;
        else if((t==0 and o%2==0) || (t%2==0 and o%2==0))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    

}