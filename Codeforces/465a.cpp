#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c;
    char a[200];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
        scanf("%c",&a[i]);
    if(a[0]=='0') c=1;
    else
    {
        for(i=0,c=0;i<n;i++)
        {
            if(a[i]=='1') c++;
            else
            {
                c++;
                break;
            }
        }
    }
    printf("%d\n",c);
}
