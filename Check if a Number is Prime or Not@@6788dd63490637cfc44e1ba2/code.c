#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int isPrime = 1;
    for(int n=2;i<=n/2;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime && n>1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}