#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include<sstream>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    long long m;
    cin>>m;
    while(m--)
    {
        int n;
        cin>>n;
        vector<long long>a;
        rep(i,0,n)
        {
            long long r;
            cin>>r;
            a.push_back(r);
        }
        sort(a.begin(),a.end());
        cout<<a[n-1]-a[0]<<"\n";
    }
}