#include<bits/stdc++.h>
using namespace std;
int main()

{
    int i,b,g,r,y,bb,gg,yy,rr;
    string a;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(i%4==0 && a[i]!='!')
        {
            if(a[i]=='R') r=0;
            else if(a[i]=='B') b=0;
            else if(a[i]=='Y') y=0;
            else if(a[i]=='G') g=0;
        }
        else if(i%4==1 && a[i]!='!')
        {
            if(a[i]=='R') r=1;
            else if(a[i]=='B') b=1;
            else if(a[i]=='Y') y=1;
            else if(a[i]=='G') g=1;
        }
        else if(i%4==2 && a[i]!='!')
        {
            if(a[i]=='R') r=2;
            else if(a[i]=='B') b=2;
            else if(a[i]=='Y') y=2;
            else if(a[i]=='G') g=2;
        }
        else if(i%4==3 && a[i]!='!')
        {
            if(a[i]=='R') r=3;
            else if(a[i]=='B') b=3;
            else if(a[i]=='Y') y=3;
            else if(a[i]=='G') g=3;
        }
    }
    bb=gg=rr=yy=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='!')
        {
            if(i%4==b) bb++;
            else if(i%4==g) gg++;
            else if(i%4==r) rr++;
            else if(i%4==y) yy++;
        }
    }
    cout<<rr<<" "<<bb<<" "<<yy<<" "<<gg<<endl;
}
