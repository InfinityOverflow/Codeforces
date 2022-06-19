#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,h1=0,h2=0,h3=0;
        cin>>n;
        if(!(n%2))
        {
            h3=1;
            n--;

        }
        h2=(int)n/2;
            h1=n-h2;
         while(h2>h3+3)
            {
                h2--;
                h1--;
                h3+=2;
            }
            if(!h3)
            {
                h2--;
                h3++;
            }
            cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }
}
/*
#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
   // IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0;
        cin>>n;
        vector<int>a;
        vector<int>b;
       rep(i,0,n)
        {
            int r;
            cin>>r;
            a.push_back(r);
            /*if(r)
            {
                f=i;
            }
        }
        rep(i,0,n)
        {
            int r;
            cin>>r;
            b.push_back(r);
            if(r)
            {
                f=i;
            }
        }
        int d=0;
        if(!f)
         d=a[f-1]-b[f-1];
        else
         d=a[0]-b[0];
        //cout<<f<<endl;
        if(d<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<d<<" "<<a[0]<<" "<<b[0]<<endl;
        f=0;
        rep(i,0,n)
        {
            if(b[i]>a[i])
            {
                f=1;
                break;
            }
            else if(a[i]-b[i]!=d)
            {
                if(b[i])
                {
                    f=1;
                    break;    
                }
                else if(d<a[i]-b[i])
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
*/