#include<stdio.h>
int main()
{
    char a[1000];
    int i,j,m;
    while(gets(a))
    {
        m=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==' ')
            {
                for(j=i-1;j>=m;j--)
                    printf("%c",a[j]);
                printf(" ");
                m=i+1;
            }
        }
        for(j=i-1;j>=m;j--)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}
