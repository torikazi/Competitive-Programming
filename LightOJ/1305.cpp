#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ax,ay,bx,by,cx,cy,dx,dy,x,y,area,cs=1;

    cin>>t;
    while(t--)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        x=ax-bx;
        dx=x+cx;
        y=ay-by;
        dy=y+cy;
        area=.5*(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
        cout<<"Case "<<cs++<<": "<<dx<<" "<<dy<<" ";
        if(area<0) cout<<area*-1;
        else cout<<area;
        cout<<endl;
    }
}
