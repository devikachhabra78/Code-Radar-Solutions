#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}