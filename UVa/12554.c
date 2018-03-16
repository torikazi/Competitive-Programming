#include<stdio.h>
int main()
{
    int n,i,j,x;
    char a[101][101];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    x=16;
    if(x%3!=0)
    {
        x+=16;
    }
    for(i=0,j=0;j<x;i++,j++)
    {
        if(i>=n) i=0;
        if(j%16==0) printf("%s: Happy\n",a[i]);
        else if(j%16==1) printf("%s: birthday\n",a[i]);
        else if(j%16==2) printf("%s: to\n",a[i]);
        else if(j%16==3) printf("%s: you\n",a[i]);
        else if(j%16==4) printf("%s: Happy\n",a[i]);
        else if(j%16==5) printf("%s: birthday\n",a[i]);
        else if(j%16==6) printf("%s: to\n",a[i]);
        else if(j%16==7) printf("%s: you\n",a[i]);
        else if(j%16==8) printf("%s: Happy\n",a[i]);
        else if(j%16==9) printf("%s: birthday\n",a[i]);
        else if(j%16==10) printf("%s: to\n",a[i]);
        else if(j%16==11) printf("%s: Rujia\n",a[i]);
        else if(j%16==12) printf("%s: Happy\n",a[i]);
        else if(j%16==13) printf("%s: birthday\n",a[i]);
        else if(j%16==14) printf("%s: to\n",a[i]);
        else if(j%16==15) printf("%s: you\n",a[i]);
    }
    return 0;
}
