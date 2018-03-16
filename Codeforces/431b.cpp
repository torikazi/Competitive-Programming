#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[6][6],i,j,ans;
    int s[5];
    s[0]=1,s[1]=2,s[2]=3,s[3]=4,s[4]=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max=0;
    do{
        ans=a[s[0]][s[1]]+a[s[1]][s[0]]+a[s[2]][s[3]]+a[s[3]][s[2]]+a[s[1]][s[2]]+a[s[2]][s[1]]+a[s[3]][s[4]]+a[s[4]][s[3]]+a[s[2]][s[3]]+a[s[3]][s[2]]+a[s[3]][s[4]]+a[s[4]][s[3]];
        if(ans>max) max=ans;
    }while(next_permutation(s,s+5));
    printf("%d\n",max);
}
