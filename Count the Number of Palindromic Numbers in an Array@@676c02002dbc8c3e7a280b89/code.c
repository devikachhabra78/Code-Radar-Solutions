#include<stdio.h>
int isPalindrome(int num){
    if(num<0) return 0;
    int original=num,r=0;
    while(num>0){
        r = r * 10;
        r = r + (num % 10);
        num = num / 10;
    }
    return (original == r);
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(isPalindrome(arr[i])){
        count++;
        }
    }
    printf("%d",count);


    return 0;
}