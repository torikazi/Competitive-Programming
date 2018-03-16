#include<stdio.h>
#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
    long double A,N,sum,i;
    while(cin>>A>>N)
    {
        for(i=1,sum=0;i<=N;i++)
        {
            sum+=i*pow(A,i);
        }
        cout<<fixed<<setprecision(0) <<sum<<endl;
    }
    return 0;
}
