#include<stdio.h>
int main()
{
    int n,c,a[1000],m,i,x;
    scanf("%d%d",&n,&c);
    for(i=0,m=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        if(a[i-1]-a[i]>m){
            x=(a[i-1]-a[i]-c);
            if(x>m) m=x;
        }
    }
    printf("%d\n",m);
}
