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
int main()
{
    IOS int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> h(n + 1);
        rep(i, 1, n + 1)
        {
            cin >> h[i];
        }
        vector<vector<int>> edges(2*m);
        rep(i, 0, m)
        {
            vector<int> edge(2);
            cin >> edge[0];
            cin >> edge[1];
            edges[i] = edge;
            reverse(edge.begin(),edge.end());
            edges[2*m-i-1]=edge;
        }
        int q;
        cin >> q;
        while(q--)
        {
            int a,b,e;cin>>a>>b>>e;
            vector<int> dist(n + 1, INT_MAX);
            dist[a] = 0;
            rep(i, 0, n - 1)
            {
                for (auto edge : edges)
                {
                    int u = edge[0];
                    int v = edge[1];
                    int diff = h[v]-h[u];
                    // if(diff<0)
                    // {
                    //     diff=-e-1;
                    // }
                        if(dist[u]!=INT_MAX and dist[v] >diff+dist[u])
                        {
                            dist[v] = diff+dist[u];
                        }
                }
            }
            int temp=dist[b];
            for (auto edge : edges)
                {
                    int u = edge[0];
                    int v = edge[1];
                    int diff = h[v]-h[u];
                    // if(diff<0)
                    // {
                    //     diff=-e-1;
                    // }
                        if(dist[u]!=INT_MAX and dist[v] >diff+dist[u])
                        {
                            dist[v] = diff+dist[u];
                        }
                }
            if(temp!=dist[b])
            {
                yes
                continue;
            }
            if(dist[b]>e)
            no
            else
            yes
        }
        cout<<endl;
    }
}