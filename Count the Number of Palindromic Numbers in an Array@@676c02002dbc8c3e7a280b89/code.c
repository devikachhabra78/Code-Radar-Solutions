#include<stdio.h>
int isPalindrome(int arr[]){
    int arr[],original,r=0;
    scanf("%d",&n);
    original = n;
    while(n>0){
        r = r*10;
        r = r + (n%10);
        n = n/10;
    }
    if(original==r){
        return 1;
    }
    else{
        return 0;
    }
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
        if(isPalindrome(arr[i]));
        count++;
    }
    printf("%d",count);


    return 0;
}