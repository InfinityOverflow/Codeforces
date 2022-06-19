#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0,m;
        cin>>n;
        m=n;
        vector<int>ir;
        rep(i,0,n)
        {
            int r;
            cin>>r;
            ir.push_back(r);
        }
        vector<int>l;
        rep(i,0,n)
        {
            int r;
            scanf("%1d",&r);
            l.push_back(r);
            if(r)
            k++;
        }
        
        while(k--)
        {
            int max=0,j=0;
        rep(i,0,n)
        {
           if(ir[i]>max and l[i]==1)
           {
               max=ir[i];
               j=i;
           }
        }
        ir[j]=m--;
        l[j]=2;
        }
       
        while(m!=0)
        {
             int max=0,j=0;
            rep(i,0,n)
          {
           if(ir[i]>max and l[i]==0)
           {
               max=ir[i];
               j=i;
           }
          }
        ir[j]=m--;
        l[j]=2;
        }
        for(auto x:ir)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}