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
      int n;
      cin>>n;
      if(n==1)
      {
        cout<<-1<<endl;
        continue;
      }
      vector<int>a,b;
      rep(i,0,n)
       {
           int r;
           cin>>r;
           a.push_back(r);
           b.push_back(r);
       }
       //cout<<-1<<endl;
       rep(i,0,n-1)
       {
          int min=i+1;
          rep(j,i+2,n)
          {
            if(a[min]>a[j])
            {
                min=j;
                //cout<<-1<<endl;
            }
          }
          swap(a[i],a[min]);
       }
       int flag=0;
       rep(i,0,n)
       {
         if(a[i]==b[i])
           {
            flag++;
            break;
           }
       }
       if(flag)
       {
         cout<<-1<<endl;
        continue;
       }
        rep(f,0,a.size())
       {
            cout<<a[f]<<" ";
        }
        cout<<endl;
    }
}