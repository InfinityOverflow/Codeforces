#include<iostream>
#include<vector>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main()
{
    int a,cap=0;
    int max=-1,sum=0;
    cin >> a;
    rep(i,0,a)
    {
        int l,m;
        cin >> l>>m;
        cap=cap-l;
        cap=cap+m;
        if(cap>max)
        max=cap;
    }
    cout << max;
    return 0;
}