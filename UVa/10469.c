#include<stdio.h>
int main()
{
    int a,b,c[1000],d[1000],s,x,i,j,t;
    while(scanf("%d%d",&a,&b)==2)
    {
        j=0;
        while(a!=0)
        {
            x=a%2;
            c[j]=x;
            j++;
            a/=2;
        }

        i=0;
        while(b!=0)
        {
            x=b%2;
            d[i]=x;
            i++;
            b/=2;
        }
        if(i>=j) x=i;
        else x=j;

        for(j--,i--;k<=x;j--,i--)
        {
            if(i<0)
        }
    }
}
