#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,s,m,i,b[10000];
    char a[20];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        getchar();
        for(i=1,s=0;i<=n;i++)
        {
            scanf("%s",a);
            if(strcmp(a,"LEFT")==0)
            {
                s--;
                b[i]=-1;
            }
            else if(strcmp(a,"RIGHT")==0)
            {
                s++;
                b[i]=1;
            }
            else if(strcmp(a,"SAME")==0)
            {
                scanf("%s%d",a,&m);
                s+=b[m];
                b[i]=b[m];
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
