#include <stdio.h>

void update(int *a,int *b) 
{
    //int sum  = *a + *b;
    //int dif  = *b - *a ;
    int tmp = *a ;
    int sum= tmp + *b ;
    int dif=  *b - tmp;
    *a = sum  ;
    *b = dif ;
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}