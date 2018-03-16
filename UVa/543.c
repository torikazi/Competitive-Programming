#include <stdio.h>
int isPrime(int n)
{
    int i;
    for(i = 2 ; i*i <= n ; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,found;
    while(scanf("%d", &n) && n!=0)
    {
        found = 0;
        for(i = 2 ; i < n ; i++)
        {
            if(isPrime(i) == 1 && isPrime(n-i))
            {
                    printf("%d = %d + %d\n", n, i, (n-i));
                    found = 1;
                    break;
            }
        }
        if(found==0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
