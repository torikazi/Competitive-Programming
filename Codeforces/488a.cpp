#include<bits/stdc++.h>
using namespace std;
int qq(int n)
{
    int v;
    while(n){
        v=n%10;
        if(v==8 || v== -8) return true;
        n=n/10;
    }
    return false;
}
int main(){
    int a,c;
    scanf("%d",&a);
    a++;
        for(c=1;;)
        {
            if(qq(a)==false) c++;
            else break;
            a++;
        }
    printf("%d\n",c);
}
