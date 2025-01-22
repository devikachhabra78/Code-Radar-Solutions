#include <stdio.h>
int main() {
    char name[50],hobby[50];
    int age;
    scanf("%s %d %s",name,&age,hobby);
    printf("Name:%s",name);
    printf("Age:%d\n",age);
    printf("Hobby:%s\n ",hobby);
    return 0;

}