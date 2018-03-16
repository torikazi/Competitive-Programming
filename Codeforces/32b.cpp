#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[500];
    int i,l;
    gets(a);
    for(i=0;a[i]!='\0';)
    {
        if(a[i]=='.')
        {
            printf("0");
            i++;
        }
        else if(a[i]=='-'&&a[i+1]=='.')
        {
            printf("1");
            i+=2;
        }
        else if(a[i]=='-'&&a[i+1]=='-')
        {
            printf("2");
            i+=2;
        }
    }
}
