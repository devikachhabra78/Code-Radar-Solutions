#include<stdio.h>
int isPalindrome(int n){
    int n,original,r=0;
    if(n<0) return 0;
    original = n;
    while(n>0){
        r = r * 10;
        r = r + (n % 10);
        n = n/ 10;
    }

}
int main(){
    int n;
    scanf("%d",&n);
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