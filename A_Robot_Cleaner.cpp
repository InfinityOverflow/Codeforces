#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    int e;
    cin>>e;
    while(e--)
    {
        int n,m,i,j,a,b,t=0;
        cin>>n>>m>>i>>j>>a>>b;
       
        int f=1,k=1;
        //cout<<i<<","<<j<<endl;
        while(true)
        {
            if(i==a || j==b)
            break;
            t++;
            if((i==n and f>0)||(i==1 and f<0))
            f*=-1;
            i+=f;
            if((j==m and k>0)||(j==1 and k<0))
            k*=-1;
            j+=k;
          // cout<<i<<","<<j<<endl;
        }
        cout<<t<<endl;
    }
}