#include<stdio.h>
int main()
{
    int n,sum,a,i,j,r[10000],c;
    while(scanf("%d",&n)==1)
    {
        c=0;
        i=0;
        if(n==0) break;
        while(n!=0)
        {
            a=n%2;
            r[i]=a;
            i++;
            c+=a;
            n=n/2;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",r[j]);
        }
        printf(" is %d (mod 2).\n",c);
    }
    return 0;
}
