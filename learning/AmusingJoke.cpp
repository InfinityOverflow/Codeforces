#include <iostream>
#include <vector>
#include <string>
#define rep(i,a,b) for(int i=a; i<b; i++)
using namespace std;
int main ()
{
    string a,b,c;
    int f=0;
    cin >> a >> b >> c;
    if(c.length()<a.length()+b.length() || c.length()>a.length()+b.length())
    cout << "NO";
    else
    {
        rep(i,0,a.length())
        {
            char ch=a.at(i);
            rep(j,0,c.length())
            {
                if(ch==c.at(j))
                {
                    c.at(j)='0';
                    f++;
                    break;
                }
            }
        }
        rep(i,0,b.length())
        {
            char ch=b.at(i);
            rep(j,0,c.length())
            {
                if(ch==c.at(j))
                {
                    c.at(j)='0';
                    f++;
                    break;
                }
            }
        }
        if(f==a.length()+b.length())
        cout << "YES";
        else
        cout << "NO";
    }
    return 0;
}