//10:05
#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll i=n-1;
    ll j=i;
    int flag=0;
    for(;i>2;i--)
    {
        char c=s[i];
        for(j=i-2;j>=1;j--)
        {
            if(s[j]==c)
            {
                if(s[j-1]==s[i-1])
                {
                    yes
                    flag++;
                    break;
                }
            }
        }
        if(flag)
            break;
    }
       if(flag)
        {
            continue;
        }
        else
        {
            no
        }
 }
}