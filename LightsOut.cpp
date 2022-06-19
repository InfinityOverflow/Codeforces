#include<iostream>
#include<string>
using namespace std;
int change(int x)
{
    switch(x)
    {
        case 0:
          return 1;
          break;
        case 1:
          return 0;
          break;
        default:
          return -1;
    }
}
int main()
{
    
    int arr[3][3];
    for(int i=0;i<3; i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }
    int l[3][3];
    for(int i=0;i<3; i++)
    {
        for(int j=0;j<3;j++)
        {
            l[i][j]=1;
        }
    }
    for(int i=0;i<3; i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!=0)
            {
                int t;
                if(arr[i][j]%2==0 && arr[i][j]!=0)
                {
                  t=2;
                }
                else                 
                t=1;
                //t=arr[i][j];
                while(t)
              {
                l[i][j]=change(l[i][j]);
                switch(i)
                {
                    case 1:
                      l[i+1][j]=change(l[i+1][j]);
                      l[i-1][j]=change(l[i-1][j]);
                      break;
                    case 2:
                      l[i-1][j]=change(l[i-1][j]);
                      break;
                    default:
                      l[i+1][j]=change(l[i+1][j]);
                }
                switch(j)
                {
                    case 1:
                      l[i][j+1]=change(l[i][j+1]);
                      l[i][j-1]=change(l[i][j-1]);
                      break;
                    case 2:
                      l[i][j-1]=change(l[i][j-1]);
                      break;
                    default:
                      l[i][j+1]=change(l[i][j+1]);
                }
               t--; 
              }
            }
        }
    }
     for(int i=0;i<3; i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << l[i][j];
        }
       cout << endl;
    }
     return 0;
}