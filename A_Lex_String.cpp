#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m,k;
       cin>>n>>m>>k;
       vector<char> a;
       vector<char>b;
       vector<char>c;
       rep(i,0,n)
       {
           char r;
           cin>>r;
           a.push_back(r);
       }
    //    char x;
    //    cin>>x;
       rep(i,0,m)
       {
           char r;
           cin>>r;
           b.push_back(r);
       }
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
    //    rep(f,0,a.size())
    //    {
    //        cout<<a[f];
    //    }
    //    cout<<endl;
    //    rep(f,0,b.size())
    //    {
    //        cout<<b[f];
    //    }
    //    cout<<endl;
       int i=0,j=0,k1=0,k2=0;
       while(i<n and j<m)
       {
       if((a[i]<b[j] || k2==k) and k1!=k)
       {
          c.push_back(a[i]);
          k1++;
          i++;
          k2=0;
          //cout<<1;
       }
       else if(k2!=k)
       {
          c.push_back(b[j]);
          j++;
          k2++;
          k1=0;
          //cout<<0;
       }
       }
        // if(i!=n)
        // {
        //    for(;i<n;i++)
        //    {
        //       c.push_back(a[i]);
        //    }
        // }
        // if(j!=m)
        // {
        //    for(;j<m;j++)
        //    {
        //       c.push_back(b[j]);
        //    }
        // }
       rep(f,0,c.size())
       {
           cout<<c[f];
       }
       cout<<endl;
    }
}