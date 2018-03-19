#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i;
    char a[2000];
    gets(a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        if((a[i]>='a' && a[i]<='z' ) ||(a[i]>='A' && a[i]<='Z' ))
        {
            if(a[i]=='A' || a[i]=='a' ||a[i]=='E' || a[i]=='e' ||a[i]=='I' || a[i]=='i' ||a[i]=='O' || a[i]=='o' ||a[i]=='U' || a[i]=='u' || a[i]=='Y' || a[i]=='y')
            {
               // cout<<a[i];
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
}
