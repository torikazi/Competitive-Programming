#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,a[20][20],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=1;
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    printf("%d\n",a[n-1][n-1]);

}
