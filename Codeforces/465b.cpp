#include<bits/stdc++.h>
int main()
{
    int n, a[1010],c,i,cn;
    scanf("%d",&n);
    for(i=0,c=0,cn=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1) c++;
        else cn++;
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]==1&&a[i+1]==0)
            c++;
    }
    if(a[n-1]==0&&cn!=n) c--;
    printf("%d\n",c);
}
