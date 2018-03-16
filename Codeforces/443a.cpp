#include <bits/stdc++.h>
int main()
{
    char a[2000];
    int i,b[300],c=0;
    gets(a);
    memset(b,0,sizeof(b));
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z') b[a[i]]++;
    }
    for(i=97;i<=125;i++) if(b[i]!=0) c++;
    printf("%d\n",c);
}
