#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,k,b;
    scanf("%lld",&n);
    for(k=0; k<=n; k++)
    {
        b=pow(2,k);
        if(b>n) break;
    }
    printf("%lld\n",k-1);
}