#include<stdio.h>
int main()
{
    int n,i,j,k,f=0;
    while(scanf("%lu",&n)==1)
    {
        if(n==1) printf("1\n");
        else
        {
        for(i=2,k=1;;i++)
        {
            f=0;
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0) k++;
            if(k==n)
            {
                printf("%d\n",i);
                break;
            }
        }
        }
    }
    return 0;
}
