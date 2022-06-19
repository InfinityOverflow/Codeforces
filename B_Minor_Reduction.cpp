#include <tuple>
#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
   // cout<<1<<endl;
    while(t--)
    {
        string x;
        cin>>x;
        //cout<<2<<endl;
        int i=0;
        for(int j=x.size()-1;j>0;j--)
        {
            if(x.at(j)-'0'+x.at(j-1)-'0'>=10)
            {
                i=j;
                break;
            }
            //cout<<j<<endl;
        }
        int s=0;
        if(i!=0)
        {
        s=x.at(i-1)-'0'+x.at(i)-'0';
        //x.erase(x.begin()+i-1);
        x.at(i-1)='1';
        x.at(i)=(char)(s%10+(int)'0');
        }
        else
        {
            s=x.at(0)+x.at(1)-2*'0';
            x.at(1)=(char)(s+(int)'0');
            x.erase(x.begin());
        }
        cout<<x;
        cout<<endl;
    }
}