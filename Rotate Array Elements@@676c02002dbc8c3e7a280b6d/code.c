#include<stdio.h>
void Rotate(int arr[],int a,int b){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return ;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k = k % n;
    Rotate(arr,0,n-1);
    Rotate(arr,0,k-1);
    Rotate(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}