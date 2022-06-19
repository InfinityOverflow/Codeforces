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
    int v;
    cin>>v;
    while(v--)
    {
        string s,t;
        cin>>s>>t;
        int m,n;
        m=s.length();
        n=t.length();
        int flag=0;
        //cout<<t.find('a')<<endl;
        if(count(t.begin(),t.end(),'a'))
        {
           flag++;
        }
        if(flag)
        {
            if(n>1)
            {
                cout<<-1<<endl;
                continue;
            }
            else
            cout<<1<<endl;
        }
        else
        {
            cout<<(int)pow(2,m)<<endl;
            
        }
        
    }
}