#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    int n,c=0,l=0;
    vector<int> a,b;
    cin>>n;
    while(n--)
    {
        int r;
        cin>>r;
        a.push_back(r);
        b.push_back(n+1);
    }
    /*rep(i,0,b.size())
    {
        cout<<b[i];
    }*/
    
    rep(i,0,a.size())
    {
        c=0;
        rep(j,0,b.size())
        {
            if(a[i]==b[j])
            {
               // cout<<a[i]<<" "<<i<< " "<<j<<endl;
                b[j]=0;
                c++;
                break;
            }
        }
        if(c==0)
        l++;

        
    }
    cout <<l;
    return 0;
}