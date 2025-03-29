#inclide<stdio.h>
int isPalindrome(int num){
    int original = num;r=0;
    if(n<0) return 0;
    while(n>0){
        r = r*10;
        r = r + (n%10);
        n=n/10;
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
    int count =0;
    for(int i=0;i<n;i++){
        if(isPalindrome(n)){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}