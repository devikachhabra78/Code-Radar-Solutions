#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int mask = ~(1 << b);
    a = a & b;
    printf("%d",a);

    return 0;
}