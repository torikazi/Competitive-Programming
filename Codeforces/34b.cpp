#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,a[110],total=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0;i<m;i++)
        if(a[i]<0) total+=a[i];
    printf("%d\n",abs(total));
}
