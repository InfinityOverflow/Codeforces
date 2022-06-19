#include<stdio.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    
    int a[n][m],b[m],c[n];
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            scanf("%1d",&a[i][j]);
        }
       
         c[i]=0;
    }
    rep(i,0,m)
    {
        int max=1;
        rep(j,0,n)
        {
            if(a[j][i]>max)
            max=a[j][i];
        }
        b[i]=max;
    }
    rep(i,0,m)
    {
        int r=b[i];
        rep(j,0,n)
        {
            if(a[j][i]==r)
            c[j]=1;
        }
    }
    int l=0;
    rep(i,0,n)
    {
        if(c[i]==1)
         l++;
    }
    printf("%d",l);
    return 0;
}