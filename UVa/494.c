#include<stdio.h>
int main()
{
    int i,c,m;
    char a[1000];
    while(gets(a))
    {
        c=0;
        m=1;
        for(i=0;a[i]!='\0';i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(m==1)
                c++;
                m=0;
            }
            else
            m=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
