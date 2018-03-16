#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    while(scanf("%d",&n)==1)
    {
        if (n==0) break;
        else if(n==1) printf("1\n");
        else if(n==2) printf("2\n");
        else
        {
        a=1;
        b=2;
        while(n>2)
        {
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        printf("%d\n",c);
        }
    }
    return 0;
}
