#include<stdio.h>
int main()
{
    int T,a,b,c,d,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==b&&b==c&&c==d) printf("square\n");
        else if((a==b&&c==d)||(a==c&&b==d)||(a==d)&&(b==c)) printf("rectangle\n");
        else if(a<=(b+c+d)&&b<=(a+c+d)&&c<=(a+b+d)&&d<=(a+b+c)) printf("quadrangle\n");
        else printf("banana\n");
    }
    return 0;
}

