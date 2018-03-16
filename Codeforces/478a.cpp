#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],s,i;
    for(i=0,s=0;i<5;i++){
        scanf("%d",&a[i]);
    s+=a[i];
    }
    if(s==0 || s%5!=0) printf("-1\n");
    else printf("%d\n",s/5);
}
