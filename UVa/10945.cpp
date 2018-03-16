#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;
char a[100000000],b[100000000];
int main()
{

    int i,j,n;
    while(gets(a))
    {
        if(strcmp(a,"DONE")==0) break;
        for(i=0,j=0;a[i]!='\0';i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(a[i]>='A'&&a[i]<='Z')
                {
                    a[i]+=32;
                }
                a[j]=a[i];
                j++;
            }
        }
        a[j]='\0';
        strcpy(b,a);
        n=strlen(b);
        reverse (b,b+n);
        if(strcmp(a,b)==0) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;
}
