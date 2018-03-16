#include<stdio.h>
int main()
{
    int page,n,i,j,f1,f2,b1,b2;
    while(1){
        scanf("%d",&page);
        if(page==0) break;
        else if(page==1) printf("Printing order for 1 pages:\nSheet 1, front: Blank, 1\n");
        else
        {
            printf("Printing order for %d pages:\n",page);
            if(page%4==0) n=page/4;
            else n=page/4+1;
            for(i=1,f1=n*4,f2=1,b1=2,b2=4*n-1;i<=n;i++,f1-=2,f2+=2,b1+=2,b2-=2)
            {
                printf("Sheet %d, front: ",i);
                if(f1>page) printf("Blank, ");
                else printf("%d, ",f1);
                if(f2>page) printf("Blank\n");
                else printf("%d\n",f2);
                printf("Sheet %d, back : %d, ",i,b1);
                if(b2>page) printf("Blank\n");
                else printf("%d\n",b2);
            }
        }
    }
    return 0;
}
