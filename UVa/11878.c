#include<stdio.h>
int main()
{
    int a,b,z=0,y,d,i;
    char x,c[1000];
    while(scanf("%d%c%d=%s",&a,&x,&b,c)!=EOF)
    {

          for(i=0,d=0;c[i]!='\0';i++)
          {
              d=d*10+c[i]-'0';
          }
          if(x=='+')
          {
              y=a+b;
              if(y==d) z++;
          }
          else
          {
              y=a-b;
              if(y==d) z++;
          }
          //if(a==0||b==0) break;
    }
    printf("%d\n",z);
    return 0;
}
