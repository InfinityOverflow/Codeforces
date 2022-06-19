#include <iostream>
#include<vector>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int a;
    long double sum=0;
    cin>> a;
    rep(i,0,a)
    {
        int r;
        cin >> r;
        sum+=r;
    }
    long double x=(sum/(a*100))*100;
    cout << x;
    return 0;
}