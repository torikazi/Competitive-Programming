#include<stdio.h>
#include<string.h>
char a[100000000];
char b[100000000];
int main()
{
    int i,j,k,m,n;
    while(scanf("%s%s",a,b)==2)
    {
        m=strlen(a);
        n=strlen(b);
        for(i=0,k=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(b[i]==a[j])
                {
                    b[k]=b[i];
                    k++;
                    break;
                }
            }
        }
        b[k]='\0';
        for(i=0,j=0,k=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                b[k]=b[j];
                k++;
                i++;
            }
        }
        b[k]='\0';
        if(strstr(b,a)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
