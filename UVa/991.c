#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,a,b;
    while(scanf("%d",&n)==1)
    {
        a=(2*((2*n)+1)*n/(n+2));
        printf("%d\n",a);
    }
    return 0;
}
