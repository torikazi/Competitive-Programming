#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1000005];
int main()
{
    int n,g,i,point,b,e;
    while(scanf("%d%d",&n,&g)==2)
    {
        point=0;
        i=0;
        while(n--)
        {
            scanf("%d%d",&b,&e);
            if(b>e) point+=3;
            else{
                a[i++]=e-b;
            }
        }
        sort(a,a+i);
        for(int j=0;j<i;j++)
        {
           // printf("%d--\n",g);
            if(a[j]<g)
            {
             //   printf("m");
                g-=a[j];
                g--;
                point+=3;
            }else if(a[j]==g)
            {
                g-=a[j];
                point++;
            }
        }
        printf("%d\n",point);
    }
}

