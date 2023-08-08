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
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for_each(s.begin(), s.end(), [](char & c) {
        c = ::toupper(c);
    });
        if(s=="YES")
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}