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
        ll n;
        cin>>n;
        vector<tuple<ll,ll,ll>>v;
        rep(i,0,n)
        {
            ll r;
            cin>>r;
            v.push_back(make_tuple(r,i+1,0));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        ll j=1,k=1,time=0;
        rep(i,0,n)
        {
            get<2>(v[i])=j*k;
            time+=2*j*get<0>(v[i]);
            if(i%2!=0)
            {
                j++;
            }
            k*=-1;
        }
        cout<<time<<endl;
        vector<pair<int,int>>a;
        for(auto x : v)
        {
            a.push_back(make_pair(get<1>(x),get<2>(x)));
        }
        sort(a.begin(),a.end());
        cout<<"0 ";
        for(auto x:a)
        cout<<x.second<<" ";
        cout <<endl;
    } 
}