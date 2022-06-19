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
        int n,c=0;
        cin>>n;
        vector<int>v;
        rep(i,0,n)
        {
            int r;
            cin>>r;
            v.push_back(r);
        }
        for(int i=n-2;i>=0;i--)
        {
            if(v[i+1]==0)
            {
                c=-1;
                break;
            }
            while(v[i])
            {
                if(v[i+1]<=v[i] and v[i+1]!=0)
                {
                    v[i]/=2;
                    c++;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
}