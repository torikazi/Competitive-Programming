#include<bits/stdc++.h>
using namespace std;
int a[100];

int main()
{
    int i,n,f,s,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   // sort(a,a+n);
    for(k=0,f=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(k!=j && k!=i && i!=j &&a[k]==a[i]+a[j])
                {
                    f=1;
                    printf("%d %d %d\n",k+1,j+1,i+1);
                    break;
                }
            }
            if(f) break;
        }
        if(f) break;
    }
    if(!f) printf("-1\n");
}
