#include <stdio.h>
int main(){
    int a,b,d;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    d = a + b;
    if(c == '+'){
        printf("%d",d);
    }
    d = a - b;
    else if(c == '-'){
        printf("%d",d);
    }
    d = a * b;
    else if(c == '*'){
        printf("%d",d);
    }
    d = a / b;
    else if(c == '/'){
        printf("%d",d);
    }
    else{
        printf("error");
    }
    return 0;
}