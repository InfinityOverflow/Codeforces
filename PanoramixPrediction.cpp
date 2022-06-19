#include<iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    int c=0;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
        
    }
    if(c)
    return false;
    else
    return true;
}
int main()
{
    int n,m,check;
    cin >> n>>m;
    if(!isPrime(m))
    cout << "NO";
    else
    {
        for(int i=n+1;;i++)
        {
            if(isPrime(i))
            {
                check=i;
                break;
            }
        }
        if(check==m)
        cout<< "YES";
        else
        cout<< "NO";
    }
    return 0;
}