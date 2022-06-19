#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    string str;
    cin>> str;
    int l=str.length();
    int s=0;
    rep(i,0,l)
    {
        char ch=str.at(i);
        rep(j,i+1,l)
        {
            if(ch==str.at(j))
            {
                s++;
                str.at(j)=s;
            }
        }
    }
    int r= l-s;
    if(r%2==0)
    {
        cout<< "CHAT WITH HER!";
    }
    else
    cout<< "IGNORE HIM!";
    return 0;
}