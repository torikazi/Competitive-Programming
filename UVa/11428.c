#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n,flag;
    while(scanf("%d",&n)==1)
    {
        flag=0;
        if(n==0) break;
        for(x=1;x<sqrt(n);x++)
        {
            for(y=0;y<=x;y++)
            {
                if(((x*x*x)-(y*y*y))==n)
                {
                    flag=1;
                    printf("%d %d\n",x,y);
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==0) printf("No solution\n");
    }
    return 0;
}
