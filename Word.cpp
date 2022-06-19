#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int uc=0,lc=0;
    for(int i=0;i<s.length();i++)
    {
       char ch=s.at(i);
       if(ch>='a' && ch<='z')
       lc++;
       else if(ch>='A' && ch<='Z')
       uc++;
    }
    if(lc>=uc)
    transform(s.begin(),s.end(),s.begin(),:: tolower);
    else
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout << s;
}