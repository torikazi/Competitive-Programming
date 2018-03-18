#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,mn,i,k;
    int r[16]={255,192,128,0,255,128,255,128,0,0,0,0,0,0,255,128};
    int g[16]={255,192,128,0,0,0,255,128,255,128,255,128,0,0,0,0};
    int bb[16]={255,192,128,0,0,0,0,0,0,0,255,128,255,128,255,128};

    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==-1 && b==-1 && c==-1) break;
        mn=9999999;
        for(i=0;i<16;i++)
        {
            d=(r[i]-a)*(r[i]-a)+(g[i]-b)*(g[i]-b)+(bb[i]-c)*(bb[i]-c);
            if(d<mn)
            {
                mn=d;
                k=i;
            }
        }
        if(k==0) printf("White");
        else if(k==1) printf("Silver");
        else if(k==2) printf("Gray");
        else if(k==3) printf("Black");
        else if(k==4) printf("Red");
        else if(k==5) printf("Maroon");
        else if(k==6) printf("Yellow");
        else if(k==7) printf("Olive");
        else if(k==8) printf("Lime");
        else if(k==9) printf("Green");
        else if(k==10) printf("Aqua");
        else if(k==11) printf("Teal");
        else if(k==12) printf("Blue");
        else if(k==13) printf("Navy");
        else if(k==14) printf("Fuchsia");
        else if(k==15) printf("Purple");
        printf("\n");
    }
}
