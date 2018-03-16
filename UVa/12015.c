#include<stdio.h>
int main()
{
    int t,m,k,max,x[15];
    char a[105],b[105],c[105],d[105],e[105],f[105],g[105],h[105],i[105],j[105];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%s%d",a,&x[0]);
        scanf("%s%d",b,&x[1]);
        scanf("%s%d",c,&x[2]);
        scanf("%s%d",d,&x[3]);
        scanf("%s%d",e,&x[4]);
        scanf("%s%d",f,&x[5]);
        scanf("%s%d",g,&x[6]);
        scanf("%s%d",h,&x[7]);
        scanf("%s%d",i,&x[8]);
        scanf("%s%d",j,&x[9]);

        max=x[0];

        for(m=0;m<4;m++)
            if(x[m]>max) max=x[m];

        printf("Case #%d:\n",k);

        if(max==x[0]) printf("%s\n",a);
        if(max==x[1]) printf("%s\n",b);
        if(max==x[2]) printf("%s\n",c);
        if(max==x[3]) printf("%s\n",d);
        if(max==x[4]) printf("%s\n",e);
        if(max==x[5]) printf("%s\n",f);
        if(max==x[6]) printf("%s\n",g);
        if(max==x[7]) printf("%s\n",h);
        if(max==x[8]) printf("%s\n",i);
        if(max==x[9]) printf("%s\n",j);
    }
    return 0;

}
