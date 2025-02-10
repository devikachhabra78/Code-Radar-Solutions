#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int binary[32];
    int i = 0;
    if(num == 0){
        printf("0");
        return 0;
    }
    while(num > 0){
        binary[i] = num%2;
        num = num/2;
        i++;
    }
    for(int j = i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    pritnf("\n")
    return 0;
}