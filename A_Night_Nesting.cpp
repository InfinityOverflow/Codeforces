#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long x=(n/m);
    if(m*x<n)
    {
        x++;
    }
    //x=max(x,n-m*x) ;
    cout<<x;
}