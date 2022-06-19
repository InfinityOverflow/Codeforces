#include<iostream>
using namespace std;
int isLucky(int n)
{
    if(n==4 || n==7)
    return 1;
    else
    {
    int c4=0,c7=0;
    while(n)
    {
        int r=n%10;
        if(r==7)
        c7++;
        else if(r==4)
        c4++;
        n=n/10;
    }
    if(c4!=0 && c7!=0)
    return 1;
    else
    return 0;
    }
}
int main()
{
    int c=0;
    long long n;
    cin >> n;
    while(n)
    {
        int r=n%10;
        if(r==4 || r==7)
        c++;
        n/=10;
    }
    if(isLucky(c))
    cout << "YES";
    else
    cout << "NO";
    return 0;
}