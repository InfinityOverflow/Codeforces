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
        int n,s,r;
        cin>>n>>s>>r;
        vector<int >a(n-1,0);
        int x=r%6;
        int m=(int)r/6;
        a[0]=x;
        rep(i,1,m+1)
        {
            a[i]=6;
        }
        int j=n-2;
        int i=0;
        while(i<j)
        {
            if(a[j]==0 and a[i]!=1)
            {
                a[i]--;
                a[j--]++;
            }
            if(a[i]==1)
            {
                i++;
            }
            if(a[j]>0)
            break;
        }
        i=0;
        j=n-2;
        while(i<n-1 and j>=0)
        {
            if(i==j)
            {
                if(a[i]>s-r)
                {
                    while (a[i]>s-r)
                    {
                        a[i-1]++;
                        a[i]--;
                    }
                }
                i++;
                j--;
                continue;
            }
            if(a[i]>s-r)
            {
                if(a[j]<s-r-1)
                {
                    a[i]--;
                    a[j]++;
                }
                j--;
            }
            if(a[j]>s-r)
            {
                while(a[j]>s-r and a[i]<s-r-1)
                {
                    a[j]--;
                    a[i]++;
                }
            }
            {
                i++;
            }
        }
        for(auto x:a)
        {
            cout<<x<<" ";
        }
        cout<<s-r<<endl;
    }
}