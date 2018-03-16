#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int i;
    while(gets(a))
    {
        gets(b);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==b[i]) printf("0");
            else printf("1");
        }
        printf("\n");
    }
    return 0;
}
