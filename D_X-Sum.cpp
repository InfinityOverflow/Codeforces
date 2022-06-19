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
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr;
        rep(i,0,n)
        {
            vector<int>v;
            rep(j,0,m)
            {
                int r;
                cin>>r;
                v.push_back(r);
            }
            arr.push_back(v); 
        }
        int l=0,k=0;
        pair<pair<int,int>,int>max;
               
    }
}