#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int i,n,j,l;
    scanf("%d",&n);
    getchar();
    while(n--)
    {

        while(gets(a))
        {
            l=strlen(a);
            if(l==0) break;
            for(j=0;j<l;j++)
            {
                if(a[j]=='0') a[j]='O';
                else if(a[j]=='1') a[j]='I';
                else if(a[j]=='2') a[j]='Z';
                else if(a[j]=='3') a[j]='E';
                else if(a[j]=='4') a[j]='A';
                else if(a[j]=='5') a[j]='S';
                else if(a[j]=='6') a[j]='G';
                else if(a[j]=='7') a[j]='T';
                else if(a[j]=='8') a[j]='B';
                else if(a[j]=='9') a[j]='P';
            }
            printf("%s\n",a);
        }
        if(n) printf("\n");
    }
    return 0;
}
