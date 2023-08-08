#include<bits\stdc++.h>
#include<algorithm>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    IOS
    int t; cin>>t;
    while(t--)
    {
       long long n; cin>>n;
       vector<long long>s;
       ll r;
       cin>>r;
       while(r>0)
       {
          long long a=r%10;
          s.push_back(a);
          r/=10;
       }
     //  string w;
      // reverse(s.begin(),s.end());
       vector<char>w;
       rep(i,0,n)
       {
         if(i<=n && s[i]==0 )
         {
            ll l=s[i+1]+10*s[i+2]+96;
            w.push_back((char)l);
           // cout<<(char)l<<endl;
            i=i+2;
         }
         else if(i<n)
         {
            ll l=s[i]-1+97;
            w.push_back((char)l);
            //cout<<(char)l<<endl;
         }
       }
       reverse(w.begin(),w.end());
       for(auto x: w)
       {
        cout<<x;
       }
       cout<<endl;
       //cout<<w<<endl;
    //    rep(i,0,n-2)
    //    {
    //     if(s[i+2]==0)
    //     {
    //         int l=10*s[i]+s[i+1]+96;
    //         w+=(char)l;
    //         i=i+2;
    //     }
    //     else
    //     {int l=s[i]+96;
    //     w+=(char)l;
    //     }
    //    }
    //    w+=((char)(s[n-2]+96)+(char)(s[n-1]+96));
    //    cout<<w<<endl;
    }
}