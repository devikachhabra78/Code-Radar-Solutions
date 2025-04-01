#include<stdio.h>
int SumofDigitd(int n){
    if(n<0){
        n=-n;
    }
    int sum = 0;
    while(n>0){
        sum = sum + (n%10);
        n=n/10;
    }
    return sum;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",SumofDigitd(arr[i]));
    }

    return 0;

}