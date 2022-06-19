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
        int n;
        cin>>n;
        vector<ll>a,b;
        rep(i,0,n)
        {
            ll r;
            cin>>r;
            a.push_back(r);
            b.push_back(i+1);//saving positions
        }
        rep(i,0,n)
        {
            if( i!=n-1)
            {
            if(a[i]!=a[i+1]) 
             goto no;
        }
            rep(j,1,n-i)
            { 
                if(a[i]==a[i+j])
                {
                    swap(b[i+j-1],b[i+j]);  // swapping for permutation 
                }
                else
                {
                    i=i+j-1;
                    break;
                }
                if(i+j==n-1)
                {
                    goto jmp;
                }
            }
        }
        /*if(b[n-1]==n)
        {
            swap(b[n-2],b[n-1]);
        }*/
        jmp:
        rep(i,0,n)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        continue;
        no:
        cout<<-1<<endl;
    }
}