#include<stdio.h>
int main()
{
    long int p,n,i,c;
    while(scanf("%ld",&n)==1)
    {
        p=1;
        for(i=0;p<n;i++)
        {
            if(i%2==0) p=p*9;
            else p=p*2;
        }
        if(i%2==0) printf("Ollie wins.\n");
        else printf("Stan wins.\n");
    }
    return 0;
}
