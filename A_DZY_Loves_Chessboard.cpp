#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    int m,n;
    cin>>n>>m;
    char a[n][m];
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cin>>a[i][j];
        }
    }
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(a[i][j]=='.')
            {
                a[i][j]='B';
            }
        }
    }
}