#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    long double T,x,y,i;
    cin >> T;
    printf("\n");
    for(i=1;i<=T;i++)
    {
        cin>> y;
        x=sqrt(y);
        cout<<x<< fixed << setprecision(0)<<endl;
    }
    return 0;
}
