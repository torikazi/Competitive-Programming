#include<stdio.h>
#include<string.h>
char a[10]="vaporeon";
char b[10]="jolteon";
char c[10]="flareon";
char d[10]="espeon";
char e[10]="umbreon";
char f[10]="leafeon";
char g[10]="glaceon";
char h[10]="sylveon";
int main()
{
    int n,i,bi[10];
    char s[10];

    scanf("%d",&n);
    scanf("%s",s);

    if(n==6) printf("%s",d);
    else if(n==8) printf("%s",a);
    else if(n==7)
    {
        int k=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!='.')
            {
                bi[k++]=i;
            }
        }
        int f1=1,f2=1,f3=1,f4=1,f5=1,f6=1;

        for(i=0;i<k;i++)
        {
            if(s[bi[i]]!=b[bi[i]])
            {
                f1=0;
                break;
            }
        }
        for(i=0;i<k;i++)
        {
            if(s[bi[i]]!=c[bi[i]])
            {
                f2=0;
                break;
            }
        }
        for(i=0;i<k;i++)
        {
            if(s[bi[i]]!=e[bi[i]])
            {
                f3=0;
                break;
            }
        }
        for(i=0;i<k;i++)
        {
            if(s[bi[i]]!=f[bi[i]])
            {
                f4=0;
                break;
            }
        }
        for(i=0;i<k;i++)
        {
            if(s[bi[i]]!=g[bi[i]])
            {
                f5=0;
                break;
            }
        }
        for(i=0;i<k;i++)
        {
            if(s[bi[i]]!=h[bi[i]])
            {
                f6=0;
                break;
            }
        }
        if(f1==1)
            printf("%s",b);
        else if(f2==1)
            printf("%s",c);
        else if(f3==1)
            printf("%s",e);
        else if(f4==1)
            printf("%s",f);
        else if(f5==1)
            printf("%s",g);
        else if(f6==1)
            printf("%s",h);
    }
    printf("\n");
}
