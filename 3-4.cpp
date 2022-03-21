#include <stdio.h>

int main()
{
    int x=19;
    printf("input x= %d \n ", x);
    
    //x = x + 5;
    x+=5 ;
    printf("x= %d \n ", x);
    //x = x - 3
    x-=3;
    printf("x= %d \n ", x);
    //x = x * 3
    x*=3;
    printf("x= %d \n ", x);
    //x = x / 3
    x/=3;
    printf("x= %d \n ", x);
    //x = x % 3
    x%=3;
    printf("x= %d \n ", x);
    //x = x & 3
    x&=3;
    printf("x= %d \n ", x);
    //x = x | 3
    x|=3;
    printf("x= %d \n ", x);
    //x = x ^ 3
    x^=3;
    printf("x= %d \n ", x);
    return 0;
    //x = x >> 3
    x>>=3;
    printf("x= %d \n ", x);
    return 0;
     //x = x << 3
    x<<=3;
    printf("x= %d \n ", x);
    return 0;
}
