#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i =a; i<b;i++)//i have see how to solve this problem with functions
vector <char> a;
char nextChar(int i);
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
      int m;
      cin>>m;
      rep(i,0,m)
      {
         char r;
         cin>>r;
         a.push_back(r);
      }
      int counter=0;
      rep(i,0,m)
      {
         char r=a[i];
         if(r=='?')
         {
            a[i]=nextChar(i+1);
         }
         else if(r=='R' and a[i+1]=='?')
         {
            a[i+1]='B';
         }
         else if(r=='B' and a[i+1]=='?')
         {
            a[i+1]='R';
         }
      }
      rep(i,0,m)
      {
         cout<<a[i];
      }
      cout<<endl;
      a.clear();
   }
  
}
char nextChar(int i)
  {
     if(i<a.size())
     {
         if(a[i]=='?')
         {
            a[i]=nextChar(i+1);  
         }
         if(a[i]=='R')
         return 'B';
         else
         return 'R';
     }
     else
     return 'R';
  }