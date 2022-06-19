#include <iostream>
#include <vector>
# define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main()
{
    int a;
    vector <int> vec1;
    cin >> a;
    rep(i,0,a)
    {
        int r;
       cin >> r;
       vec1.push_back(r);
    }
    int x=vec1.size();
    cout << x << endl;
    int max=0,min=101,b=0;
    rep(i,0,x)
    {
        if(vec1[i]<=min)
        {
            min=vec1[i];
            b=i;
        }
    }
    for(int i =x-1;i>=0;i--)
    {
        if(vec1[i]>=max)
        {
            max=vec1[i];
            a=i;
        }
    }
    cout << a << " " << b << endl;
    int time=0;
    while(a!=0)
    {
        int r=a-1;
        if(r==b)
        {
            a--;
            b++;
            time++;
        }
        else
        {
            time++;
            a--;
        }
    }
    while(b!=x-1)
    {
        b++;
        time++;
    }
    cout << time;
    return 0;
}