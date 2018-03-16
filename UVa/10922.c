#include<stdio.h>
#include<string.h>
int main()
{
    int i,s,c,m,b;
    char a[10000];
    while(gets(a))
    {
        if(a[0]=='0'&&strlen(a)==1) break;
        s=0;
        c=1;
        for(i=0;a[i]!='\0';i++)
        {
            s=s+a[i]-'0';
        }
        while(s>9)
        {
            m=s;
            s=0;
            while(m!=0)
            {
                b=m%10;
                s+=b;
                m/=10;
            }
            c++;
        }

        if(s%9==0) printf("%s is a multiple of 9 and has 9-degree %d.\n",a,c);
        else printf("%s is not a multiple of 9.\n",a);
    }
    return 0;
}

