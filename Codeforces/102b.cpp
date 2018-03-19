#include<bits/stdc++.h>
char a[10000000];
int main()
{
    gets(a);
    int s,i,k,b,c=0,l;
    l=strlen(a);
    if(l>1) c++;
    for(i=0,s=0;a[i]!='\0';i++)
    {
        s=s+a[i]-'0';
    }
    while(s>9)
    {
        k=s;
        s=0;
        while(k)
        {
            b=k%10;
            s+=b;
            k/=10;
        }
        c++;
    }
    printf("%d\n",c);

}
