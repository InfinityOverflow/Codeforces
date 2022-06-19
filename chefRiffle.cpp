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
    int m;
    cin>>m;
    while(m--)
    {
        long long n,k;
        cin>>n>>k;
        long long a[n],b[n/2];//vector
        rep(i,0,k)
        {
            a[i]=i+1;
        }
        while(k--)
        {
            int i=1;
            int l=2;
            while(l<n)
            {
                 if(i%2==1)
                 b[(long long)(l-2)/2]=a[i];
                 a[i]=a[l];
                 i++;
                 l+=2;
            }
            l=0;
            while(i<n)
            {
                if(i%2==1)
                b[(long long)(l+2)/2]=a[i];
                a[i]=b[l];
                l++;
                i++;
            }
        }
        rep(i,0,n)
        {
            cout<<a[i];
        }
    }
}