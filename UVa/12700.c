#include<stdio.h>
int main()
{
    char a[20];
    int B,W,A,T,i,j,n,m;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d",&m);
        W=0;
        B=0;
        T=0;
        A=0;
        getchar();
        for(i=0;i<m;i++)
        {
            scanf("%c",&a[i]);
        }
        for(i=0;i<m;i++)
        {
            if(a[i]=='W') W++;
            else if(a[i]=='B') B++;
            else if(a[i]=='T') T++;
            else if(a[i]=='A') A++;
        }
        printf("Case %d: ",j);
        if(A==m) printf("ABANDONED\n");
        else if(B>W&&T==0&&W==0) printf("BANGLAWASH\n");
        else if(W>B&&T==0&&B==0) printf("WHITEWASH\n");
        else if(B==W) printf("DRAW %d %d\n",B,T);
        else if(B>W) printf("BANGLADESH %d - %d\n",B,W);
        else if(W>B) printf("WWW %d - %d\n",W,B);

    }
    return 0;
}
