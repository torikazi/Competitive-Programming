#include<stdio.h>
int main()
{
    long long int a[110],i,j,t,b[110],m,k,f,n;
    long long int x=1,y=1,z;
    char c[200];
    a[1]=x;
    for(i=2;i<=100;i++)
    {
        z=x+y;
        a[i]=z;
        x=y;
        y=z;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&b[i]);
        scanf("%s",c);
        for(i=0,j=0;c[i]!=0;i++)
        {
            if(c[i]>='A'&&c[i]<='Z')
            {
                c[j]=c[i];
                j++;
            }
        }
        c[j]='\0';
        for(i=1,k=0;k!=n;i++)
        {
            for(j=0,f=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    f=1;
                    m=j;
                    k++;
                }
            }
            if(f==1) printf("%c",c[m]);
            else printf(" ");
        }
        printf("\n");
    }
}
