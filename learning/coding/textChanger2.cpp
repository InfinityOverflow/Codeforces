#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s,w;
    cin >> w;
    while(w!="NO")
    {
        s="";
        for(int i=0;i<w.length();i++)
        {
            char ch=w.at(i);
            s=s+(char)((int)ch-7);
        }
        cout <<s;
        cout<< endl<<"Enter More Strings or type NO to exit"<<endl;
        cin>>w;
    }
    return 0;
}