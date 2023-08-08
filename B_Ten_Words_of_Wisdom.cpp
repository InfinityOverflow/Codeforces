#include<bits\stdc++.h>
typedef long long int ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    IOS
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int maxi=0;
        int idx=0;
        int i=0;
        while(n--)
        {
            i++;
            int a,b;
            cin>>a>>b;
            if(a<=10)
            {
                if(b>maxi)
                {
                    maxi=b;
                    idx=i;
                }
            }
        }
        cout<<idx<<endl;
    }
}