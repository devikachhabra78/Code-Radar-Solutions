#include<stdio.h>
void fibonacciSeries(int n){
    int a=0,b=1,c;
    printf("%d ");
    if(n<=1){
        return 1;
    }
    
    for(int i=2;i<=n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    printf("\n");
    
}
    

