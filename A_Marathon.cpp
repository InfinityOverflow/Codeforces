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
        int arr[4],a=0;
        rep(i,0,4)
        {
            cin>>arr[i];
            if(!i)
              a=arr[0];

        }
        sort(arr,arr+4);
        rep(i,0,4)
        {
            if(arr[i]==a)
            {
                cout<<4-i-1<<endl;
                break;
            }
        }
    }
}