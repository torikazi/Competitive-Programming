#include<stdio.h>
int main()
{
    int i,sum,flag;
    char a[30];
    while(gets(a))
    {
        sum=0;
        flag=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
               sum+=a[i]-38;
            if(a[i]>='a'&&a[i]<='z')
               sum+=a[i]-96;
        }
        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1) printf("It is not a prime word.\n");
        else printf("It is a prime word.\n");
    }
    return 0;
}
