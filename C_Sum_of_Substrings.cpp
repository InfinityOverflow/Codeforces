#include <bits\stdc++.h>
using namespace std;
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        ll k;
        string l;
        cin>>n>>k;
        //vector<int>a;
        rep(i,0,n)
        {
            int r;
            scanf("%1d",&r);
            if(r)
            {
                l+='1';
            }
            else
              l+='0';
            //a.push_back(r);
            if(r)
            {
                if(i!=0 and i!=n-1)
              s+=11;
            else if(i==0)
                   s+=10;
            else
                s+=1;
            }
        }
       // cout<<s<<endl;
       // printvec(a,n);
        if(!k || n==2)
        {
            cout<<s<<endl;
            continue;
        }
        else
        {
            int j=l.find('1');
            reverse(l.begin(),l.end());
            int h=l.find('1');
            if(h+j<=k and (h>=1 and (j>=1 and  h+j!=n-1)) )
           {
                    s-=11;
            }
            else
            {
                if(h<=k and h>=1)
                {
                    s-=10;
                    k-=h;
                }
                else if(j<=k and (j>=1 and h+j!=n-1))
                {
                    s-=1;
                }
            }
            
        }
        cout<<s<<endl;
    }
}