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
        int n,k;
        cin>>n>>k;
        int c=INT16_MAX;
        string s,str="";
        cin>>s;
        rep(i,0,n-k)
        {
            int r=0;
            rep(j,i,i+k)
            {
                if(s.at(j)=='W') 
                  r++;
            }
            if(c>r)
            {
                c=r;
            }
        }
        //sort(c,c+n-1);
        cout<<c<<endl;
    }
}