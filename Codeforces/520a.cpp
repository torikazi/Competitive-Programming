#include<bits/stdc++.h>
int main()
{
    int n,i,w[30],x,f;
    scanf("%d\n",&n);
    char a[200];
    gets(a);
    memset(w,0,sizeof(w));
    if(n<26)
    {
        printf("NO\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        x=toupper(a[i])-'A';
        w[x]=1;
    }
    for(i=0,f=1;i<26;i++)
    {
        if(!w[i])
        {
            printf("NO\n");
            f=0;
            break;
        }
    }
    if(f) printf("YES\n");
}
