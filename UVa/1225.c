#include<stdio.h>
int main()
{
    int t,N,i,j,k,a,x,b,c,d,e,f,g,h,m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&N);
        x=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        g=0;
        h=0;
        m=0;
        n=0;
        for(j=1;j<=N;j++)
        {
            k=j;
            while(k!=0)
            {
                a=k%10;
                if(a==0) x++;
                else if(a==1) b++;
                else if(a==2) c++;
                else if(a==3) d++;
                else if(a==4) e++;
                else if(a==5) f++;
                else if(a==6) g++;
                else if(a==7) h++;
                else if(a==8) m++;
                else if(a==9) n++;
                k/=10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",x,b,c,d,e,f,g,h,m,n);

    }
    return 0;
}
