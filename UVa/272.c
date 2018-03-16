#include<stdio.h>
int main()
{
    char a[100];
    int i,x=0;
    while(gets(a))
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='"')
            {
                if(x%2==0) printf("``");
                else printf("''");
                x++;
            }
            else printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
