#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
       n *= i;
        
    }
    printf("n x i = %d\n",n);
    return 0;
}