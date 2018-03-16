#include<stdio.h>
int main()
{
    int n,i,c,d;
    while(scanf("%d",&n)==1)
    {
        c=n/7;
        d=n%7;
        for(i=1;i<=c;i++)
        {
            printf("ROYGBIV");
        }
        if(d==1) printf("G\n");
        else if(d==2) printf("GB\n");
        else if(d==3) printf("GBI\n");
        else if(d==4) printf("GBIV\n");
        else if(d==5) printf("YGBIV\n");
        else if(d==6) printf("OYGBIV\n");
    }
    return 0;
}
