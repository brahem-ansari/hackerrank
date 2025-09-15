#include <stdio.h>
int main ()
{
    int a ;
    int b ;
    float x ;
    float y ;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&x);
    scanf("%f",&y);
    int sum = a + b ;
    int dif = a - b ;
    float suum = x + y ;
    float diif = x - y ;
    printf("%d ",sum);
    printf("%d\n",dif);
    printf("%.1f ",suum);
    printf("%.1f",diif);
}