#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char a[1005],b[1005],d[1005],e[1005];
    int i,j,k,c,y,x,l1,l2;
    while(gets(a)&&gets(b))
    {
        l1=strlen(a);
        l2=strlen(b);
        sort(a,a+l1);
        sort(b,b+l2);
        k=0;
        for(i=0;a[i]!='\0';i++)
        {
            for(j=0;b[j]!='\0';j++)
            {
                if(a[i]==b[j])
                {
                    d[k]=a[i];
                    k++;
                }
            }
        }
        d[k]='\0';
        y=0;
        for(i=0;i<k;i++)
        {
            for(j=i,x=0;j<k;j++)
            {
                if(d[i]==d[j]) x++;
            }
            if(x==1)
            {
                e[y]=d[i];
                y++;
            }
        }
        e[y]='\0';
        puts(e);
    }
    return 0;
}
