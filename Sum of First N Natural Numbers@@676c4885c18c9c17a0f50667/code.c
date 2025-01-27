#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = 0;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a + i;
    }
    return 0;
}