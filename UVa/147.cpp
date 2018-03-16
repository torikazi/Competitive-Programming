#include<bits/stdc++.h>
int c[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
unsigned long long int w[30005];

int main()
{
    int i,j,b;
    double a;
    memset(w,0,sizeof(w));
    w[0]=1;
    for(i=0;i<11;i++)
    {
        for(j=c[i];j<=30005;j++)
        {
            w[j]+=w[j-c[i]];
        }
    }

   // for(i=0;i<=20;i++)
        //    printf("%d ",w[i]);

    while(scanf("%lf",&a)==1)
    {
        b=(int)round(a*100);
        if(b==0) break;
        printf("%6.2f%17llu\n",a,w[b]);
    }
    return 0;
}
