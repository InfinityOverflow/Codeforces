#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >>n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin>> s[i];
    }
    int c=0,flag=0;;
    for(int i=0; i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            if(s[j]!=s[i])
            {
               c=c+j-i-1;
               if((j-i-1)!=0)
               i=j-1;
               flag++;
               break;
            }
        }
    }
    if(flag==0)
    {
       c=n-1;
    }
    cout<< c;
}