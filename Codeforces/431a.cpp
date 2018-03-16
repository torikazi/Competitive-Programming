#include<stdio.h>
int main()
{
    char s[100000];
    int a[5],sum,i;
    scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
    scanf("%s",s);
    sum=0;
    for(i=0;s[i]!='\0';i++)
    {
        sum+=a[s[i]-48];
    }
    printf("%d\n",sum);
}
