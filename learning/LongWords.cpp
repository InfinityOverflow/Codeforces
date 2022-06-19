#include <iostream>
#include <vector>
#include<string>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; i++)
int main()
{
    
    //vector<string>a;
    int a;
    cin>>a;
    rep(i,0,a)
    {
        string str;
        cin>>str;
        //cout<<endl;
        if(str.length()>10)
        {
            cout << str.at(0)<<str.length()-2<<str.at(str.length()-1)<<endl;
        }
        else
        cout<<str<<endl;
    }
}