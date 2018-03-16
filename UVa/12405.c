#include<stdio.h>
int main()
{
    int t,n,i,j,k,min,b[200],c;
    char a[200];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        getchar();
        for(i=0;i<n;i++)
            scanf("%c",&a[i]);
        for(i=0,j=0,c=0;i<n;)
        {
            if(a[i]=='.')
            {
                i+=3;
                c++;
            }
            else if(a[i]=='#')
            {
                i++;
            }
        }
        printf("Case %d: %d\n",k,c);
    }
    return 0;
}
