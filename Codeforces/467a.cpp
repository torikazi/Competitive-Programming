#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a[110],b[110],i,c;
   scanf("%d",&n);
   for(i=0,c=0;i<n;i++)
   {
       scanf("%d%d",&a[i],&b[i]);
       if(a[i]+2<=b[i]) c++;
   }
   printf("%d\n",c);
   return 0;
}
