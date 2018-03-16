#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[300],b[300];
    int i,t,j,d[300],k,l,max,c;
    scanf("%d\n",&t);
    while(t--)
    {
        gets(a);
        for(i=0,j=0;a[i]!='\0';i++)
        {
            if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
            if(a[i]>='a'&&a[i]<='z')
            {
                a[j]=a[i];
                j++;
            }
        }
        //a[j]='\0';
        for(i=0,l=0;i<j;i++)
        {
            for(k=i,c=0;k<j;k++)
            {
                if(a[i]==a[k]) c++;
            }
            if(c==1)
            {
                b[l]=a[i];
                l++;
            }
        }
        sort(b,b+l);
        max=0;
        for(i=0;i<l;i++)
        {
            for(k=0,c=0;k<j;k++)
            {
                if(b[i]==a[k]) c++;
            }
            d[i]=c;
            if(c>max) max=c;
        }
        for(i=0;i<l;i++)
        {
            if(d[i]==max) printf("%c",b[i]);
        }
        printf("\n");
    }
}
