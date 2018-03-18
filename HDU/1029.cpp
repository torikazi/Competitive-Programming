#include<stdio.h>
#include<string.h>

int a[1000000];

int main()
{
    int n;

    while ( scanf("%d",&n)==1) {

        memset(a,0,sizeof(a));

        int p, ans, flag = 1, k = (n+1)/2;

        for( int i=0 ; i<n ; i++ ){

            scanf("%d",&p);

            a[p]++;

            if( flag && a[p]==k ) {
                ans = p;
                flag = 0;
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}
