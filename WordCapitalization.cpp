#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ch=s.at(0);
    if(ch>='a' && ch<='z')
    s.at(0)=char(int(s.at(0))-32 );
    cout << s;
    return 0;
}