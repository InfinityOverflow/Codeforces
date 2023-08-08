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
        int n;cin>>n;
        vector<int>v;
        deque<int>a;
        //cout<<n<<" ";
        rep(i,1,n+1)
        {
            a.push_front(i);
        }
        rep(i,0,n)
        {
            v.push_back(n-i);
        }
        //  rep(i,0,n)
        // {
        //     cout<<v[i]<<" ";
        //     // cout<<a.front()<<" ";
        //     // a.pop_front();
        // }
       // cout<<endl;
        rep(i,0,n)
        {
            if(i!=0 and i!=n-1 and !(v[i]%(i+1)))
            {
                swap(v[i],v[i+1]);
            }
            else if(i==n-1)
            {

            }

        }
        rep(i,0,n)
        {
            cout<<v[i]<<" ";
            // cout<<a.front()<<" ";
            // a.pop_front();
        }
        cout<<endl;
    }
}