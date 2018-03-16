#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h[20]={0,1,2,3,4,5,10,11,12,13,14,15,20,21,22,23};
    int m[20]={0,10,20,30,40,50,1,11,21,31,41,51,2,12,22,32};
    int hh,mm,ans,i;
    scanf("%d:%d",&hh,&mm);
    for(i=0;i<16;i++)
    {
        if(hh==h[i] && mm==m[i])
        {

            ans=0;
            break;
        }
        else if(hh==h[i] && mm<m[i])
        {

            ans=m[i]-mm;
            break;
        }
        else if(hh==h[i] && mm>m[i] && hh!=23)
        {

            ans=60-mm;
            ans+=(h[i+1]-h[i]-1)*60+m[i+1];
            break;
        }
        else if(hh==h[i] && hh==23 && mm>m[i])
        {
           // printf("m");
            ans=60-mm;
            break;
        }
        else if(hh<h[i])
        {
            ans=60-mm;
            ans+=(h[i]-hh-1)*60+m[i];
            break;
        }
    }
    cout<<ans<<endl;

}
