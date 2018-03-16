#include<stdio.h>
int main()
{
    float H,U,D,F,d;
    float day;
    while(scanf("%f%f%f%f",&H,&U,&D,&F)==4)
    {
        if(H==0) break;
        else
        {
            day=0;
            d=0;
            F=U*(F/100);
            while(d<=H&&d>=0)
            {
                d=d+U;
                U=U-F;
                if(U<0) U=0;
                if(d<=H) d=d-D;
                day++;
            }
            if(d>=H) printf("success on day %.0f\n",day);
            else if(d<=0) printf("failure on day %.0f\n",day);
        }
    }
    return 0;
}
