#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    double a[5],s;
    int i;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])==6)
    {
        if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0) break;
        sort(a,a+6);
        for(i=1,s=0;i<5;i++)
            s+=a[i];
        cout<<s/4<<endl;
    }
}
