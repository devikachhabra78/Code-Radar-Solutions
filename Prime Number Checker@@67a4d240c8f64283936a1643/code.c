#include<stdio.h>
void isPrime(int n){
    isPrime=0;
    if(n<=1){
        return 0;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
    }
}