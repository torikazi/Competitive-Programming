#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int t,i;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(a);
        if(strlen(a)==5) printf("3\n");
        else if((a[0]=='t'&&a[1]=='w')||(a[0]=='t'&&a[2]=='o')||(a[1]=='w'&&a[2]=='o')) printf("2\n");
        else printf("1\n");
    }
    return 0;
}
