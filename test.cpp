#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)//i have see how to solve this problem with functions
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
      int m;
      cin>>m;
      vector <char> a;
      rep(i,0,m-1)
      {
         char r;
         a.push_back(r);
      }
      int counter=0;
      rep(i,0,m-1)
      {
         char r=a[i];
         if(r=='?')
         {
            rep(j,i+1,m-1)
            {
               char k=a[j];
               if(k=='?')
               {
                  continue;
               }
            }
         }
      }
   }
   return 0;
}