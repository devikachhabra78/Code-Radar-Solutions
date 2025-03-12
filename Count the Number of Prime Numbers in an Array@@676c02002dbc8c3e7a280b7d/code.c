#include<stdio.h>
int Prime(int n){
    if(n<=1){
        return 0;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(Prime(arr[i])){
            count++;

        }
    }
    printf("%d",count);

    return 0;
}