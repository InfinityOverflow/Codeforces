#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i =a; i<b;i++)

//bool isCoPrime(int x,int y);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n--;
        rep(i,2,n/2+1)
        {
            if(__gcd(i,n-i)==1)
            {
                cout<<i<<" "<<n-i<<" 1"<<endl;
                break;
            }
            else
            continue;
        }
    }
}