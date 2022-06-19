#include <iostream>
#include <vector>
#define rep(i,a,b) for(int i =a;i<b;i++)
using namespace std;
int main()
{
    int max=-1,min,a,t=0;
    cin>>a>>max;
    min=max;
    rep(i,0,a-1)
    {
        int r;
        cin >> r;
        if(r>max)
        {
           max=r;
           t++;
        }
        else if(r<min)
        {
            min=r;
            t++;
        }
    }
    cout << t;
    return 0;
}