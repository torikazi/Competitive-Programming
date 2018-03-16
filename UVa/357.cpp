#include<bits/stdc++.h>
int c[]={1,5,10,25,50};
unsigned long long int w[30010],x;

int main()
{
    int i,j,b;
    memset(w,0,sizeof(w));
    w[0]=1;
    for(i=0;i<5;i++)
    {
        for(j=c[i];j<=30010;j++)
        {
            w[j]+=w[j-c[i]];
        }
    }

   // for(i=0;i<=20;i++)
        //    printf("%d ",w[i]);

    while(scanf("%d",&b)==1)
    {
        x=w[b];
        if(x==1)
            printf("There is only 1 way to produce %d cents change.\n",b);
        else
            printf("There are %llu ways to produce %d cents change.\n",x,b);
    }
    return 0;
}

