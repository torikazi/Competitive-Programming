#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("Case %d: ",i);
        if(a*a==b*b+c*c) printf("yes\n");
        else if(b*b==a*a+c*c) printf("yes\n");
        else if(c*c==b*b+a*a) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
