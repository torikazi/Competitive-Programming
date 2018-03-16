#include<stdio.h>
int main()
{
    int n,i,j=0,a,b[1000];
    char s[100000];
    while(scanf("%s",&s)==1)
    {
        if(s[0]!='0'&&s[1]!='x')
        {
            n=0;
            for(i=0;s[i]!='\0';i++)
            {
                n=n*10+s[i]-'0';
            }
            while(n>16)
            {
                a=n%16;
                b[j]=a;
                j++;
                n=n/16;
            }
            printf("0x");
            if(n==10) printf("A");
            else if(n==11) printf("B");
            else if(n==12) printf("C");
            else if(n==13) printf("D");
            else if(n==14) printf("E");
            else if(n==15) printf("F");
            else if(n==16) printf("10");
            else printf("%d",n);
            for(i=j-1;i>=0;i--)
            {
                if(b[i]==10) printf("A");
                else if(b[i]==11) printf("B");
                else if(b[i]==12) printf("C");
                else if(b[i]==13) printf("D");
                else if(b[i]==14) printf("E");
                else if(b[i]==15) printf("F");
                else printf("%d",b[i]);
            }
            printf("\n");
        }
        //else if(s[0]=='0'&&s[1]=='x')

    }
    return 0;

}
