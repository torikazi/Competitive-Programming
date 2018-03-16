#include<stdio.h>
int name(int n)
{
    int s,a,y;
    for(s=0;n!=0;n/=10)
    {
        a=n%10;
        s+=a;
    }
    y=s;
    if(s>9) y=name(s);
    return y;
}
int main()
{
    char a[100],b[100];
    int i,sum,sum1,z,k;
    float res;
    while(gets(a))
    {
        gets(b);
        sum=0;
        sum1=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                sum+=a[i]-64;
            }
            else if(a[i]>='a'&&a[i]<='z')
            {
                sum+=a[i]-96;
            }
        }
        if(sum>9) z=name(sum);
        for(i=0;b[i]!='\0';i++)
        {
            if(b[i]>='A'&&b[i]<='Z')
            {
                sum1+=b[i]-64;
            }
            else if(b[i]>='a'&&b[i]<='z')
            {
                sum1+=b[i]-96;
            }
        }
        if(sum1>9) k=name(sum1);
        if(z<k) res=((float)z/(float)k)*100;
        else res=((float)k/(float)z)*100;
        printf("%.2f %%\n",res);

    }
    return 0;
}
