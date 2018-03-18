#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,m,y,s,leap,i;
    int mm[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>t;
    while(t--)
    {
        cin>>d>>m>>y;
        s=0;
        leap=0;
        for(i=2012;i<y;i++)
        {
            if(i%4!=0) s+=365;
            else if(i%100!=0) s+=366;
            else if(i%400!=0) s+=365;
            else s+=366;
        }
        if(y%4!=0) leap=0;
        else if(y%100!=0) leap=1;
        else if(y%400!=0) leap=0;
        else leap=1;

        for(i=1;i<m;i++)
        {
            if(leap && i==2) s+=29;
            else s+=mm[i];
        }
        s+=d;
        if(s%7==1)
                printf("Sunday\n");
        if(s%7==2)
                printf("Monday\n");
        if(s%7==3)
                printf("Tuesday\n");
        if(s%7==4)
                printf("Wednesday\n");
        if(s%7==5)
                printf("Thursday\n");
        if(s%7==6)
                printf("Friday\n");
        if(s%7==0)
                printf("Saturday\n");

    }
}
