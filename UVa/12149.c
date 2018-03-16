#include<stdio.h>
int main()
{
    int N,A;
    while(scanf("%d",&N)==1&&N!=0)
    {
        A=0;
        while(N!=0)
        {
            A+=N*N;
            N--;
        }
        printf("%d\n",A);
    }
    return 0;
}
