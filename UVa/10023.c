#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,T;
    double s;
    char y[1000000];
    scanf("%lld",&T);
    printf("\n");
    for(i=1;i<=T;i++)
    {
        scanf("%s",y);
        for(i=0,s=0;y[i]!='\0';i++)
        {
            s=sqrt(s*10+y[i]-'0');
        }
        printf("%lf\n\n",s);
    }
    return 0;
}
