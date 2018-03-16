#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int a[10],i,f,e,x,b;
    memset(a,0,sizeof(a));
    for(i=0;i<6;i++){
        scanf("%d",&x);
        a[x]++;
    }
    for(i=1,e=0,b=0,f=0;i<10;i++)
    {
        if(a[i]==6)
            e=1;
        if(a[i]==5) b=1;
        if(a[i]==2) e=1;
        if(a[i]>=4) f=1;
    }
    if(f==0) printf("Alien\n");
    else if(f==1&& e==1) printf("Elephant\n");
    else printf("Bear\n");
}
