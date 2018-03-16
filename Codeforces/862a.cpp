#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,a[2000],b[2000],x,c,i;
        scanf("%d%d",&n,&x);
        memset(b,0,sizeof(b));
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]=1;
        }
        c=0;
        for(i=0;i<=100;i++)
        {

            if(b[i]==0 && i!=x) c++;
            else if(b[i]==1 && i==x)
            {
                c++;
                break;
            }
            else if(i==x) break;
        }
        printf("%d\n",c);

}
