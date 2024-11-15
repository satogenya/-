#include <stdio.h>

int main(void)
{
    int j,k,l;
    
    printf("一つ目の数字は？:");
    scanf("%d",&j);
    
    printf("二つ目の数字は？:");
    scanf("%d",&k);
    
    l = j * k;
    
    if (l > 0) {
        printf("一つ目の数字 %d と二つ目の数字 %d の積 %d は正の数です。\n", j , k , l);
    }
    if (l < 0) {
        printf("一つ目の数字 %d と二つ目の数字 %d の積 %d は負の数です。\n", j , k , l);
    }
    if (l == 0) {
        printf("一つ目の数字 %d と二つ目の数字 %d の積 %d はゼロです。\n", j , k , l);
    }
    
    return 0;
}
