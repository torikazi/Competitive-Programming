#include<stdio.h>
int main()
{
    int n,i,t=1;
    char a[2000][200],b='"';
    while(scanf("%d\n",&n)==1)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            gets(a[i]);
        }
        printf("Case %d:\n",t++);
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n{\n");
        for(i=0;i<n;i++)
        {
            printf("printf(%c",b);
            printf("%s",a[i]);
            printf("\\n%c);\n",b);
        }
        printf("printf(%c\\n%c);\nreturn 0;\n}\n",b,b);
    }
    return 0;
}
