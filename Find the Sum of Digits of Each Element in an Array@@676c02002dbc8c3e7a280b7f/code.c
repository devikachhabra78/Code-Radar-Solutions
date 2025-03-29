#include<stdio.h>
int SumofDigits(int n){
    int sum=0;
    if(n<0){
        n=-n;
    }
    while(n>0){
        sum = sum + (n%10);
        n = n/10;
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",SumofDigits(arr[i]));
    }

    return 0;
}