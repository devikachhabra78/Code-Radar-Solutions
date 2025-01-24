#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int nth_bit = (a >> b) & 1;
    printf("%d",nth_bit);
    return 0;
}