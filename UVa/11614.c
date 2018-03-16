#include<stdio.h>
int main()
{
    long int t,a,s,n,c,i;
    scanf("%ld",&t);
    while(scanf("%ld",&n))
    {
        s=0;
        a=1;
        c=0;
        while(s<=n)
        {
            s+=a;
            a++;
            c++;
        }
        if(n<s) c--;
        printf("%ld\n",c);
        t--;
    }
    return 0;
}
