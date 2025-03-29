#include<stdio.h>
void isPrime(int num){
    if(num<=1){
        return 0;
    }
    else{
        for(int i=2;i*i<=num;i++){
            if(num % i==0){
                return 0;
            }

        }
        return 1;
    }
}
void printPrimesInRange(int a,int b){
    for(int i=1;i<=b;i++){
        if(isPrime(i)){
        printf("%d",i);}
    }
}
