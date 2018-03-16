#include<stdio.h>
#include <iostream>
#include <iomanip>
#include<algorithm>
using namespace std;
long double fact(long double n)
{
    long double i,r=1;
    for(i=n;i>=1;i--)
    {
        r*=i;
    }
    return r;
}
int main()
{
    long double N,M,C;
    while (cin >> N >> M)
    {
        if(N==0 && M==0) break;
        C=fact(N)/(fact(N-M)*fact(M));
        cout << N << " things taken " << M << " at a time is " << fixed << setprecision(0)<< C << " exactly." << endl;
    }
    return 0;
}
