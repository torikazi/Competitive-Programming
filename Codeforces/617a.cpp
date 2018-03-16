#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a;
    scanf("%d",&x);
    a=x/5;
    if(x%5==0) printf("%d",a);
    else printf("%d",a+1);
}
