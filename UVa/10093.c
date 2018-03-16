#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    while(scanf("%c",&a)==1)
    {
        getchar();
        if(a>='0'&&a<='9')
            printf("%d\n",a-47);
        else if(a>='A'&&a<='Z')
            printf("%d\n",a-54);
        else if(a>='a'&&a<='z')
            printf("%d\n",a-60);
        else printf("such number is impossible!\n");
    }
    return 0;
}
