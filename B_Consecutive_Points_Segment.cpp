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
        if(n==1)
        {
            cout<<"YES"<<endl;
            int r;
            cin>>r;
            continue;
        }
        ll arr[n];
        rep(i,0,n)
        {
            cin>>arr[i];
        }
        ll a[n-1],c=0,d=0;
        rep(i,0,n-1)
        {
            a[i]=arr[i+1]-arr[i];
            if(a[i]>3)
            {
                cout<<"NO"<<endl;
                goto end;
            }
            else if(a[i]==3)
            {
                
                c++;
            }
            else if(a[i]==2)
            {
                //if(!(i==0 and a[i]==2) || !(i==n-1 and a[i]==2) )
                d++;
            }
            if(c>1 || d>2)
            {
                cout<<"NO"<<endl;
                goto end;
            }
        }
        cout<<"YES"<<endl;
        end:
        continue;
    }
}