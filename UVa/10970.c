#include<stdio.h>
int main()
{
    int M,N,r;
    while(scanf("%d %d",&N,&M)==2)
    {
        r=M*N-1;
        printf("%d\n",r);
    }
    return 0;
}
