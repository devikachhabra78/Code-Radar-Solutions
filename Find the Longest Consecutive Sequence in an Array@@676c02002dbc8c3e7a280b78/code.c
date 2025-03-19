#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        count++;
    }
    printf("%d",count);
    return 0;
}