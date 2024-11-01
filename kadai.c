#include <float.h>
#include <limits.h>
#include <stdio.h>
int main()
{
    printf("long double型の最大値:%lld\n",ULLONG_MAX);
    printf("long double型の最小値:%lld\n",LLONG_MAX);
    printf("long double型の精度:%lld\n",LLONG_MIN);

    return 0;
}
