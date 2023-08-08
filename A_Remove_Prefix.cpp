#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    //IOS
    int t; cin>>t;
    while(t--)
    {
        unordered_map<int,int>umap;
        queue<int>q;
        int n;
        cin>>n;
        while(n--)
        {
            int r;cin>>r;
            q.push(r);
            umap[r]++;
        }
        unordered_map<int,int>::iterator it=umap.begin();
        // for(;it!=umap.end();it++)
        // {
        //     if(it->second==1)
        //     umap.erase(it);
        // }
    for (auto it = umap.begin(); it != umap.end(); ) {
        if (it->second == 1) {
            it = umap.erase(it);
        } else {
            ++it;
        }
    }
        int count=0;
    //     cout << "Element  Frequency" << endl;
    // for (auto i : umap)
    //     cout << i.first << " \t\t\t " << i.second << endl;
        while(!q.empty() and !umap.empty())
        {
            umap[q.front()]--;
            if(umap[q.front()]<=1)
            {
                umap.erase(q.front());
            }
            q.pop();
            count++;
        }
        cout<<count<<endl;
    }
}