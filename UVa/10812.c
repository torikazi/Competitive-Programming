#include<stdio.h>
int main()
{
    int a,b,n,x,y,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>=b&&(a+b)%2==0)
        {
            x=(a+b)/2;
            y=a-x;
            printf("%d %d\n",x,y);
        }
        else printf("impossible\n");
    }
    return 0;
}
