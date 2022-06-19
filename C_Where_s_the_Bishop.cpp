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
        int flag=0,f=0;
        rep(i,0,8)
        {
            
            string s,b;
            cin>>s;
            b=s;
            sort(s.begin(),s.end());
            if(s.at(0)=='#' and s.at(1)=='#')
            {
                f++;
            }
            if(s.at(0)=='#' and s.at(1)=='.' and flag==0 and i!=0 and i!=7 and f!=0)
            {
                cout<<i+1<<" "<<b.find('#')+1<<endl;
                flag++;
            }
        }
    }
}