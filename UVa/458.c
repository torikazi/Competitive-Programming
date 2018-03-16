#include<stdio.h>
int main()
{
    char a[100];
    int i;
    while(gets(a)){
        for(i=0;a[i]!='\0';i++)
        {
            printf("%c",a[i]-7);
        }
        printf("\n");
    }
    return 0;
}
