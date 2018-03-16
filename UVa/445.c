#include<stdio.h>
int main()
{
    char a[10000];
    int i,j,s;
    while(gets(a))
    {
        s=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>='0'&&a[i]<='9')
            {
                s+=a[i]-48;
            }
            else
            {
                if(a[i]>='A'&&a[i]<='Z'||a[i]=='*')
                {
                    for(j=0;j<s;j++)
                        printf("%c",a[i]);
                }
                else if(a[i]=='b')
                {
                    for(j=0;j<s;j++)
                        printf(" ");
                }
                else if(a[i]=='!')
                    printf("\n");
                s=0;
            }
        }
        printf("\n");
    }
    return 0;
}
