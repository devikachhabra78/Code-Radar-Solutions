#include<stdio.h>
int isPalindrome(int arr[n],int n){
    for(int i=0,i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            return 0;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(isPalindrome(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}