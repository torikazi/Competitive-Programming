#include<stdio.h>
int main()
{
    char a[30];
    int i;
    while(gets(a))
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='1') printf("1");
            else if(a[i]=='0') printf("0");
            else if(a[i]=='-') printf("-");
            else if(a[i]=='A'||a[i]=='B'||a[i]=='C') printf("2");
            else if(a[i]=='D'||a[i]=='E'||a[i]=='F') printf("3");
            else if(a[i]=='G'||a[i]=='H'||a[i]=='I') printf("4");
            else if(a[i]=='J'||a[i]=='K'||a[i]=='L') printf("5");
            else if(a[i]=='M'||a[i]=='N'||a[i]=='O') printf("6");
            else if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S') printf("7");
            else if(a[i]=='T'||a[i]=='U'||a[i]=='V') printf("8");
            else if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z') printf("9");
        }
        printf("\n");
    }
    return 0;
}
