#include<stdio.h>
#include<string.h>
int main()
{
    char S[100005],T[1005];
    int i,j,n,q,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",S);
        scanf("%d",&q);
        for(j=1;j<=q;j++)
        {
            scanf("%s",T);
            if(strstr(S,T)==0) printf("n\n");
            else printf("y\n");
        }
    }
    return 0;
}
