#include<stdio.h>
void fibonacciSeries(int n){
    int a=0,b=1,c;
    printf("%d ");
    for(int i=1;i<n;i++){
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
    printf("\n");
    
}
    

