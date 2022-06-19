#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include<sstream>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
bool isPrime(int l);
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int flag=0;
        rep(i,0,s.length())
        {
            rep(j,0,s.length()-i)
            {
                string b=s.substr(i,j);
                int x=0;
                if(b.length()>1)
                x=stoi(b);
               // cout<<x<<"\n";
                int l=0;
                int k=0;
                while(x)
                {
                    int r=x%10;
                    l+=(int)pow(2,k)*r;
                    k++;
                    x/=10;
                }
                //cout<<l<<'\n';
                if(isPrime(l))
                {
                    flag++;
                    break;
                }   
            }
            if(flag)
            break;
        }
        if(flag)
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";
    }
}
bool isPrime(int l)
{
    if(l<=1)
    return false;
    else
    {
    int r=0;
    rep(i,2,(int)sqrt(l)+2)
    {
        if(l%i==0)
        {
            r++;
            break;
        }
    }
    if(!r)
    return true;
    else
    return false;
    }
}