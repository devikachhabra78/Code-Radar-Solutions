#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a == 0){
        printf("Zero");
    }
    elif(a < 0){
        printf("Negative");
    }
    else{
        printf("Positve");
    }
    return 0;
}