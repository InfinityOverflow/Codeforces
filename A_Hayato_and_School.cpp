#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(auto &x:a)
        {
            cin>>x;
        }
        rep(i,0,n)
        {
            a[i]%=2;
        }
        int b[3];
        int c=0;
        rep(i,0,n)
        {
           if(c==3)
           break;
           if(a[i]==1)
           {
             b[c]=i;
             c++;
           }
        }

        if(c==3)
        {
            yes
            cout<<b[0]+1<<" "<<b[1]+1<<" "<<b[2]+1<<endl;
        }
        else if (c==2 || c==1)
        {
            c=0;
            rep(i,0,n)
            {
                if(c==2)
                break;
                if(a[i]==0)
                {
                     b[c+1]=i;
                    c++;
                }
            }
            if(c==2)
            {
                yes;
                cout<<b[0]+1<<" "<<b[1]+1<<" "<<b[2]+1<<endl;
            }
            else
            no
        }
        else
        {
            no
        }
    }
}