#include<stdio.h>
int main()
{
    int t,G,L,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&G,&L);
        if(L%G==0) printf("%d %d\n",G,L);
        else printf("-1\n");
    }
    return 0;
}
