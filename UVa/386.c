#include<stdio.h>
int main()
{
    int n,i,j,k,m,l;
    for(n=6;n<=200;n++)
    {
        for(i=2,m=0;i*i*i<=n*n*n;i++)
        {
            for(j=i;j*j*j<=n*n*n;j++)
            {
                for(k=j;k*k*k<=n*n*n;k++)
                {
                    if((i*i*i)+(j*j*j)+(k*k*k)==n*n*n)
                    {
                        printf("Cube = %d, Triplate = (%d,%d,%d)\n",n,i,j,k);
                        break;
                    }

                }
            }
        }
    }
    return 0;
}
