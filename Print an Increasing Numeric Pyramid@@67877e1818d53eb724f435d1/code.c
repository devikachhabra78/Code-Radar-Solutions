#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int j = i;j < n;j++){
            printf(" ");
        }
        printf("1")
        for(int j = 1;j <= (2 * i - 1);j++){
            printf(" ");
        }
        if(i>1){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}