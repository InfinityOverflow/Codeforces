#include<bits\stdc++.h>
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
        int k; cin>>k;
        int n; cin>>n;
        vector<int> a;
        int b=1;
        int c=1;
        rep(i,0,k)
        {
            if(b<=n)
            {
            a.push_back(b);
            b+=c;
            c++;
            // a.push_back(b);
            // b++;
            // i++;
            }
            else
            {
                if(a[a.size()-1]==n and a.size()!=k)
                {
                    //if(a[a.size()-2]+1<=n)
                    // cout<<a[a.size()-2]+1<<" 1 "<<i<<endl;
                    a[a.size()-1]=a[a.size()-2]+1;
                    i--;
                }
                else
                {
                    // cout<<a[a.size()-1]+1<<" 2 "<< i<<endl;
                    a.push_back(a[a.size()-1]+1);
                }
            }
        }
          if(a[k-1]>n)
                {
                    //if(a[a.size()-2]+1<=n)
                    a[k-1]=n;
                }
        // c--;
        // b=0;
        // if(c!=k)
        // {
        //     rep(i,c,k)
        //     {
        //        // cout<<"Yo "<<a[b]<<" ";
        //         a.push_back(a[b]);
        //         b++;
        //     }
        //    // cout<<endl;
        // }
        rep(i,0,k)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}