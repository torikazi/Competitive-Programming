#include<bits/stdc++.h>
int c[]={1,5,10,25,50};
unsigned long long int w[8000];

int main()
{
    int i,j,b;
    memset(w,0,sizeof(w));
    w[0]=1;
    for(i=0;i<5;i++)
    {
        for(j=c[i];j<=8000;j++)
        {
            w[j]+=w[j-c[i]];
        }
    }

   // for(i=0;i<=20;i++)
        //    printf("%d ",w[i]);

    while(scanf("%d",&b)==1)
    {
        printf("%llu\n",w[b]);
    }
    return 0;
}
