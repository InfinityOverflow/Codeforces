#include <bits\stdc++.h>
typedef long long int ll;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int flag=0;
int solve(string &s,int len,int i)
{
    for(;i>=0;i--)
    {
        if(s[i]>='5')
        break;
    }
    if(i!=-1)
    {
        int k;
        for(k=i-1;k>=0;k--)
        {
            if(s[k]<'9')
            break;
        }
        if(k!=-1)
        {
            s[k]++;
            i=k;
            flag=i+1;
        }
        else
        {
            s='1'+s;
            i=0;
            flag=1;
        }

        return min(solve(s,s.length(),i),i); 
    }
    else
    {
        return 1;
    }

}
bool comp(string &x,string &temp)
{
    for(int i=0;i<x.length();i++)
    {
        if(x[i]>temp[i])
        return true;
    }
    return false;
}
int main()
{
    IOS
    int t;cin>>t;
    while(t--)
    {
        string x;cin>>x;
        string temp=x;
        int len=x.length();
        flag=len;
        int k=solve(x,len,len-1);
        k=flag;
        for(;k<x.length();k++)
        {
            x[k]='0';
        }
        if(x.length()>temp.length()|| comp(x,temp))
        cout<<x<<endl;
       else
        cout<<temp<<endl;
    }
}