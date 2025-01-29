#include <stdio.h>
int main(){
    int n,r,m;
    char name[50];
    scanf("%d\n %d\n %c\n %d\n",&n,&r,&name,&m);
    printf("Roll Number:%d, ",r);
    printf("Name: %c, ",name);
    printf("Marks: %d ",m);
    
    return 0;
}