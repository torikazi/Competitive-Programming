#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,K,sum=0;
    char a[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        if(strcmp(a,"donate")==0)
        {
            scanf("%d",&K);
            sum+=K;
        }
        else
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
