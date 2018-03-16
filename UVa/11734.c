#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    char a[30],b[30];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(a);
        gets(b);
        printf("Case %d: ",i);
        if(strcmp(a,b)==0) printf("Yes\n");
        else if(strstr(a," ")!=0)
        {
            for(j=0,k=0;a[j]!='\0';j++)
            {
                if(a[j]!=' ')
                {
                    a[k]=a[j];
                    k++;
                }
            }
            a[k]='\0';
            if(strcmp(a,b)==0) printf("Output Format Error\n");
            else printf("Wrong Answer\n");
        }
        else printf("Wrong Answer\n");
    }
    return 0;
}
