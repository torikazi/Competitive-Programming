#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[10000],b[100000];
    int i,j,n,k,s;
    float l,m;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        l=strlen(a);
        m=sqrt(l);
        k=m;
        if(m==k)
        {
            for(i=0,s=0;i<m;i++,k--)
            {
                for(j=i;j<=l-k;j+=m)
                {
                    b[s]=a[j];
                    s++;
                }
            }
            b[s]='\0';
            puts(b);
        }
        else printf("INVALID\n");
    }
    return 0;
}
