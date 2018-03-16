#include<bits/stdc++.h>
int main()
{
    int i,n,c,s,a;
    scanf("%d",&n);
    for(i=1,c=0,s=0;;i++)
    {
        a=(i*(i+1))/2;
        s+=a;
        if(s<=n) c++;
        else break;
    }
    printf("%d\n",c);

}
