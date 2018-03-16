#include<stdio.h>
int main()
{
    char a[1000],b[1000],c[1000];
    int x,y,z,i;
    while(gets(a))
    {
        gets(b);
        gets(c);
        x=0;
        y=0;
        z=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                x++;
        }
        for(i=0;b[i]!='\0';i++)
        {
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
                y++;
        }
        for(i=0;c[i]!='\0';i++)
        {
            if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
                z++;
        }
        if(x==5&&y==7&&z==5) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
