#include<iostream>
using namespace std;
# define REP(i,a,b) for(int i=a;i<=b;i++)
int fact(int n)
{
   int s=1;
   REP(i,1,n)
   {
      s=s*i;
   }
   return s;
}
int main()
{
   int n;
   cin >> n;
   int n1=fact(n);
   REP(i,1,n)
   {
      int a =  n1/fact(n-i);
      int b=  n1/fact(n-a);
      if(b==i)
      cout << i;
   }
}