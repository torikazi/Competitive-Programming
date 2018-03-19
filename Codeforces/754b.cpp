#include<bits/stdc++.h>
using namespace std;
string a[5];
bool check()
{

    if(a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][2]=='x')
        return true;
    if(a[0][1]==a[0][2] && a[0][2]==a[0][3] && a[0][3]=='x')
        return true;
    if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][2]=='x')
        return true;
    if(a[1][1]==a[1][2] && a[1][2]==a[1][3] && a[1][3]=='x')
        return true;
    if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][2]=='x')
        return true;
    if(a[2][1]==a[2][2] && a[2][2]==a[2][3] && a[2][3]=='x')
        return true;
    if(a[3][0]==a[3][1] && a[3][1]==a[3][2] && a[3][2]=='x')
        return true;
    if(a[3][1]==a[3][2] && a[3][2]==a[3][3] && a[3][3]=='x')
        return true;

    if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[2][0]=='x')
        return true;
    if(a[1][0]==a[2][0] && a[2][0]==a[3][0] && a[3][0]=='x')
        return true;
    if(a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[2][1]=='x')
        return true;
    if(a[1][1]==a[2][1] && a[2][1]==a[3][1] && a[3][1]=='x')
        return true;
    if(a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[2][2]=='x')
        return true;
    if(a[1][2]==a[2][2] && a[2][2]==a[3][2] && a[3][2]=='x')
        return true;
    if(a[0][3]==a[1][3] && a[1][3]==a[2][3] && a[2][3]=='x')
        return true;
    if(a[1][3]==a[2][3] && a[2][3]==a[3][3] && a[3][3]=='x')
        return true;

    if(a[0][1]==a[1][2] && a[1][2]==a[2][3] && a[2][3]=='x')
        return true;
    if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[2][2]=='x')
        return true;
    if(a[3][3]==a[1][1] && a[1][1]==a[2][2] && a[2][2]=='x')
        return true;
    if(a[1][0]==a[2][1] && a[2][1]==a[3][2] && a[3][2]=='x')
        return true;

    if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[2][0]=='x')
        return true;
    if(a[0][3]==a[1][2] && a[1][2]==a[2][1] && a[2][1]=='x')
        return true;
    if(a[1][2]==a[2][1] && a[2][1]==a[3][0] && a[2][1]=='x')
        return true;
    if(a[1][3]==a[2][2] && a[2][2]==a[3][1] && a[3][1]=='x')
        return true;
    return false;
}
int main()
{
    int n,m,i,f,j;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }

    for(i=0,f=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]=='.')
            {
                a[i][j]='x';
                if(check()==true)
                {
                    printf("YES\n");
                    f=1;
                    break;
                }
                a[i][j]='.';
            }
        }
        if(f) break;
    }
    if(!f) printf("NO\n");
}
