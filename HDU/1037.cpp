#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<168&&b<168&&c<168) printf("NO CRASH\n");
    else
    {
        if(a<168) printf("CRASH %d\n",a);
        if(b<168) printf("CRASH %d\n",b);
        if(c<168) printf("CRASH %d\n",c);
    }
    return 0;
}
