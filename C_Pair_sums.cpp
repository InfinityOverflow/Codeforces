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
    int n,x;
    cin>>n>>x;
    vector<int>v;
    rep(i,0,n)
    {
        int r;
        cin>>r;
        v.push_back(r);
    }
    sort(v.begin(),v.end());
    
}