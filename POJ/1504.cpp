#include<stdio.h>
#include <stdlib.h>
#include<string.h>



int main()
{
    char a[100],b[100];
    char str[100];
    int t,i,s,v,r=0;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%s%s",&a,&b);

        strrev(a);
        strrev(b);


        v=atoi(b);
        s=atoi(a);


        r=(s+v);

        itoa(r,str,10);
        strrev(str);
        r=atoi(str);

        printf("%d\n",r);

    }


    return 0;
}
