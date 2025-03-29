#include<stdio.h>
int isPalindrome(int arr[n],int n){
    isPalindrome=0;
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(arr[i]!=arr[j]){
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
    if(isPalindrome==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}