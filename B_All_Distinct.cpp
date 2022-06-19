#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        rep(i,0,n)
        {
            int r;
            cin>>r;
            a.push_back(r);
        }
        sort(a.begin(),a.end());
        int c=0;
        int i=0;
        while(i<n)
        {
            if(i>0)
            {
                if(a[i-1]==a[i])
                  ;
                else
                  c++;
            }
            else
             c++;
        
            i++; 
        }
        cout<<c<<endl;
    }
}