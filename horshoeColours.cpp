#include <iostream>
#include <vector>
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
using namespace std;
int main()
{
    vector<ll>a(4);
    rep(i,0,4)
    {
        cin>>a[i];
    }
    int s=0;
    rep(i,0,4)
    {
        int c=a[i];
        rep(j,i+1,4)
        {
            if(c==a[j])
            {
                s++;
                a[j]=-s;
            }
        }
    }
    cout <<s;
}