#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include<sstream>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)
int main()
{
    long long m;
    cin>>m;
    while (m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+c)%2==0)
        {
            if((a+c)/2==b || ((a+c)/2)%b==0)
            cout<<"YES"<<"\n";
            else if((a+c)/2<b)
            {
                goto car;
            }
            else
            cout<<"NO"<<endl;
        }
        else
        {
            if(2*b<a+c)
            {
                cout<<"NO"<<endl;
            }
            else
            {     
            car:
            if((2*b-a)%c==0||(2*b-c)%a==0)
            cout<<"YES"<<endl;
            else
            cout <<"NO"<<"\n";
            }
        }
    }
}