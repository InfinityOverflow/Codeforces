#include<bits\stdc++.h>
typedef long long ll ;
#define rep(i,a,b) for(int i =a; i<b;i++)
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
class node
{
    public:
      string colour;
      node*next;
      node(string clr)
      {
        colour=clr;
        next=nullptr;
      }
};
int main()
{
    int n;cin>>n;
    node*tail=nullptr,*head;
    while(n--)
    {
        int r;
        cin>>r;
        if(r==1)
        {
            string s;
            cin>>s;
            node*ne=new node(s);
            if(tail==nullptr)
            {
                tail=ne;
                head=tail;
            }
            else
            {
                head->next=ne;
                head=ne;
            }
        }
        else
        {
            cout<<tail->colour<<endl;
            node *ne=new node(tail->colour);
            tail=tail->next;
            head->next=ne;
            head=ne;
            if(tail==nullptr and head!=nullptr)
            {
                tail=head;
            }
        }
    }

}
