#include<stdio.h>
#include<string.h>
int main()
{
    char a[107];
    int i,j,c,T,n;
    scanf("%d",&T);
    getchar();
    for(i=1;i<=T;i++)
    {
        gets(a);
        c=0;
        n=strlen(a);
        for(j=0;j<n;j++)
        {
            if((a[j]=='a')||(a[j]=='d')||(a[j]=='g')||(a[j]=='j')||(a[j]=='m')||(a[j]=='p')||(a[j]=='t')||(a[j]=='w')||(a[j]==' ')) c+=1;
            else if((a[j]=='b')||(a[j]=='e')||(a[j]=='h')||(a[j]=='k')||(a[j]=='n')||(a[j]=='q')||(a[j]=='u')||(a[j]=='x')) c+=2;
            else if(a[j]=='c'||a[j]=='f'||a[j]=='i'||a[j]=='l'||a[j]=='o'||a[j]=='r'||a[j]=='v'||a[j]=='y') c+=3;
            else if((a[j]=='s')||(a[j]=='z')) c+=4;
        }
        printf("Case #%d: %d\n",i,c);
    }
    return 0;
}
