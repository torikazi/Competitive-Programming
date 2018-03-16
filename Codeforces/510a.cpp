#include<stdio.h>
using namespace std;
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=m;j++)
            {
                printf("#");
            }
        }
        else if(i%4==0)
        {
            printf("#");
            for(j=2;j<=m;j++)
                printf(".");
        }
        else
        {
            for(j=2;j<=m;j++)
                printf(".");
            printf("#");
        }
        printf("\n");
    }
}
