#include<stdio.h>

int arr(int i)
{
    int j=0,k[100],o,x,y,c;
    while(i!=0)
    {
        o=i%10;
        k[j]=o;
        j++;
        i=i/10;
    }
    for(x=0;x<j;x++)
    {
        for(y=0,c=0;y<j;y++)
        {
            if(k[x]==k[y]) c++;
        }
        if(c>1) break;
    }
    return c;
}
int main()
{
    int N,M,a,b,i,z,sum;
    while(scanf("%d%d",&N,&M)==2)
    {
        sum=0;
        if(N>M)
        {
            a=M;
            b=N;
        }
        else
        {
            a=N;
            b=M;
        }
        for(i=a;i<=b;i++)
        {
            if(arr(i)==1) sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
