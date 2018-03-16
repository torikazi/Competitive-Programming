#include<stdio.h>
int main()
{
    char a[50],i=1;
    while(gets(a))
    {
        if(a[0]=='*') break;
        printf("Case %d: ",i);
        i++;
        if(strcmp(a,"Hajj")==0) printf("Hajj-e-Akbar\n");
        else if(strcmp(a,"Umrah")==0) printf("Hajj-e-Asghar\n");
    }
    return 0;
}
