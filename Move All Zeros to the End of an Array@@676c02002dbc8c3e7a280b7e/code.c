#include<stdio.h>
int reverse(int arr[],int a,int b ){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return reverse;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            reverse(arr,0,n-1);

        }
    }
    printf("%d",arr)
    
    return 0;

    }