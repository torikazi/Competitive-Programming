#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30],c[30],d[30];
    int T,i,j,flag=0;
    scanf("%d",&T);
    getchar();
    for(i=1;i<=T;i++)
    {
        gets(a);
        gets(b);
        if(strlen(a)!=strlen(b)) printf("No\n");
        else
        {
            for(j=0;a[j]!='\0';j++)
            {
                if(a[j]!=b[j])
                {
                    if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
                    {
                       if(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u') flag=1;
                        else
                        {
                            printf("No\n");
                            break;
                        }
                    }
                    else if(a[j]!=b[j])
                    {
                        printf("No\n");
                        break;
                    }
                }
                if(j==strlen(a)-1) printf("Yes\n");
            }
        }
    }
    return 0;
}
