#include<stdio.h>
int main()
{
    char x,y,z;
    int a,b,t,i;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%c%c%c-%d",&x,&y,&z,&a);
        getchar();
        b=(x-'A')*26*26+(y-'A')*26+(z-'A');
        if(abs(b-a)<=100) printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}
