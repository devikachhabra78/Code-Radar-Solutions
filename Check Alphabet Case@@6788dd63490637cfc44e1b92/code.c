#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&c);
    if(a >= 'A' && a <='Z'){
        printf("Uppercase");
    }
    else if(a >= 'a' && a <= 'z'){
        printf("Lowecase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}