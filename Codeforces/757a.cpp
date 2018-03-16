#include<bits/stdc++.h>
using namespace std;
int main()
{
    string aa;
    int B=0,u=0,l=0,bb=0,a=0,s=0,r=0,i,cnt=0;
    cin>>aa;

    for(i=0;aa[i]!='\0';i++)
    {
        if(aa[i]=='B') B++;
        else if(aa[i]=='u') u++;
        else  if(aa[i]=='l') l++;
        else  if(aa[i]=='b') bb++;
        else  if(aa[i]=='a') a++;
        else  if(aa[i]=='s') s++;
         else if(aa[i]=='r') r++;

    }
    cnt=0;
    while(1)
    {
        if(B>=1 && u>=2 && l>=1 && bb>=1 && a>=2 && s>=1 && r>=1)
        {
            B--;
            u--;
            l--;
            bb--;
            a--;
            s--;
            a--;
            u--;
            r--;
            cnt++;
        }
        else
            break;
    }
    cout<<cnt<<endl;
}
