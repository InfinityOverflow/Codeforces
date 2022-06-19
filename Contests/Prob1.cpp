#include<iostream>
#include<string>
using namespace std;
# define rep(i,a,b) for(long long  i=a;i<=b;i++)
void f()
{
    long long n,m,x;
    
    cin >> n >> m >> x;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            
            if(x==(i+1+j*n))
            {
                cout << (j+1+i*m)<< endl;
                break;
                
            }
        }
    }
    
}
int main()
{
   long n;
   cin>> n;
   while(n--)
   {
      f();
   }
   return 0;
}