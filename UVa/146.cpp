#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;


int main()
{
    char a[1000];
    int l;
    while(scanf("%s",a)==1)
    {
        l=strlen(a);
        if(a[0]=='#') break;
        if(next_permutation(a,a+l))
            printf("%s\n",a);
        else printf("No Successor\n");
    }
    return 0;
}
