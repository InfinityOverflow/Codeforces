#include<iostream>
using namespace std;
bool isSame(char a,char b)
{
    if( a==b)
    return true;
    else 
    return false;
}
int main()
{
    string a;
    string b;
    cin >> a >> b;
    for(int i=0;i<a.length();i++)
    {
        if(isSame(a.at(i),b.at(i)))
        cout << 0;
        else
        cout << 1;
    }
}