#include <stdio.h>
int main(){
    int n,r,m;
    char name[50];
    scanf("%d\n %d\n %c\n %d\n",&n,&r,&name,&m);
    printf("Roll Number:%d, ",r);
    printf("Name: %c,\n",name);
    printf("Marks: %d\n",m);
    
    return 0;
}