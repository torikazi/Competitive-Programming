#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    char x;
    int i,s1,s,w,w1,b1;
    float ans;
    while(gets(a))
    {
        gets(b);
        for(i=0,s=0;i<strlen(a);i++)
        {

            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            {
               x=tolower(a[i]);
               s+=x-'a'+1;
            }
        }

        w=0;
        while(s)
        {
            b1=s%10;
            w+=b1;
            s/=10;
        }
        if(w>9){
            s=w;
            w=0;
            while(s)
            {
                b1=s%10;
                w+=b1;
                s/=10;
            }
        }
        for(i=0,s1=0;i<strlen(b);i++)
        {

            if((b[i]>='a' && b[i]<='z') || (b[i]>='A' && b[i]<='Z'))
            {
               x=tolower(b[i]);
               s1+=x-'a'+1;
            }
        }

        w1=0;
        while(s1)
        {
            b1=s1%10;
            w1+=b1;
            s1/=10;
        }
        if(w1>9){
            s1=w1;
            w1=0;
            while(s1)
            {
                b1=s1%10;
                w1+=b1;
                s1/=10;
            }
        }
       if(w>w1)
        ans=(float)w1*100/(float)w;
        else
        ans=(float)w*100/(float)w1;
        printf("%0.2f %%\n",ans);
    }
}

