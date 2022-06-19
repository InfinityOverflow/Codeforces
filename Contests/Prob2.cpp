#include<iostream>
#include<string>
using namespace std;
# define rep(i,a,b) for(long long i=a;i<=b;i++)
void f1(long long n,long long m,long long x);
void f()
{
    long long n,m,x;
    int c=0;
    cin >> n >> m >> x;//x==(i+1+j*n)
    if(n<1000 && m<1000)
    f1(n,m,x);
    else
    {
    
    rep(i,0,n-1)
    {
        long long l=0,u=m-1;
        while(l<u)
        {
            long long r=(long long)(l+u)/2;
            if(x>(i+1+r*n))
            {l=r+1;
             
            }

            else if(x<(i+1+r*n))
            {u=r-1;
             
            }
            else
            {
            
             cout << (r+1+i*m)<< endl;
             break;
            }
        }
        if(c!=0)
        {
            break;
        }
    }
    
    if(c==0)
    cout << x << endl;
    
    }
}
void f1(long long n,long long m,long long x)
{ 
    int c=0;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            
            if(x==(i+1+j*n))
            {
                c++;
                cout << (j+1+i*m)<< endl;
                break;
                
            }
        }
        if(c!=0)
        break;
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