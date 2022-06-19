#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s,w;
    cin >> s;
    while(s!="NO")
    {
        w="";
        for(int i =0;i<s.length();i++)
        {
            char ch= s.at(i);
            w=w+(char)((int)ch+7);   
        }
        cout << w;
        cout << endl<<"Enter More Strings or type NO to exit"<<endl;
        cin >>s;
    }
    return 0;
}