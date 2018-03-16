#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i,j,k,c,a[3005],b[3005];
    while(scanf("%d",&n)==1)
    {
        j=0;
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            b[j]=a[i]-a[i+1];
            if(b[j]<0) b[j]*=-1;
            j++;
        }
        sort(b,b+1);
        for(i=0;i<j;i++)
        {
            for(k=i+1;k<n;k++)
            {
                if(b[i]==b[k])
                {
                    c=1;
                    break;
                }
            }
            if(c==1) break;
        }
        if(c==1) printf("Not jolly\n");
        else printf("Jolly\n");
    }
    return 0;
}

