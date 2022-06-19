#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
void printarr(int n,int k);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k==1)
        {
            cout<<"YES"<<"\n";
            printarr(n,k);
            continue;
        }
        else
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<"\n";
            printarr(n,k);
            continue;
        }
    }
}
void printarr(int n,int k)
{
    int c=1,l=1;;
    rep(i,0,n)
    {
        c=l;
        rep(j,0,k)
        {
            cout<<c<<" ";
            c+=n;
        }
        l++;
        cout<<"\n";
    }

}