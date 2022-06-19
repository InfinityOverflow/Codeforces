#include <iostream>
#include <iterator>
#include <set>
 
using namespace std;
 
int main()
{
    /*set<int>s={5,6,2,7,8,1,10,9};
    for(auto x:s)
    {
        cout<<x<<endl;//output is sorted in asscending order
    }*/
    int t;
    cin>>t;
    while(t--)
    {
        set <int>s;
        int q;
        cin>>q;
        int x;
        while(q--)
        {
            char c;
            cin>>c;
            switch (c)
            {
            case /* constant-expression */'a':
            
            cin>>x;
            s.insert(x);
                  
                /* code */
                break;
            case 'b':
            for(auto x:s)
            cout<<x<<endl;
            break;
            case 'c':
            
            cin>>x;
            s.erase(x);
            break;
            case 'd':
            
            cin>>x;
            x=s.count(x);
            if(x)
            cout<<x;
            else
            cout<<"-1";
            break;
            default:
                x=s.size();
                cout<<x;
                break;
            }
        }
    }
    return 0;
}