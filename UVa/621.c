#include<stdio.h>
#include<string.h>
int main()
{
    int t,l;
    char a[10000];
    scanf("%d\n",&t);
    while(t--)
    {
        gets(a);
        l=strlen(a);
        if(strcmp(a,"78")==0||strcmp(a,"1")==0||strcmp(a,"4")==0) printf("+\n");
        else if(a[l-1]=='5'&&a[l-2]=='3') printf("-\n");
        else if(a[0]=='9'&&a[l-1]=='4') printf("*\n");
        else if(a[0]=='1'&&a[1]=='9'&&a[2]=='0') printf("?\n");
    }
    return 0;
}
