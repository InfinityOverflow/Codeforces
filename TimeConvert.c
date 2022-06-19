#include <stdio.h>
int main()
{
    int a[3],a1[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d:",&a[i]);
    }
    /*for(int i=0;i<3;i++)
    {
        printf("%d",a[i]);
    }*/
    for(int i=0;i<3;i++)
    {
        scanf("%d:",&a1[i]);
    }
    int h=a[0]-a1[0];
    int r=a[1]*60+a[2];
    int r1=a1[1]*60+a1[2];
    while(r<r1)
    {
        r+=60*60;
        h--;
    }
    r-=r1;
    r1=(int)r/60;
    printf("%d:%d:%d",h,r1,r%60);
}