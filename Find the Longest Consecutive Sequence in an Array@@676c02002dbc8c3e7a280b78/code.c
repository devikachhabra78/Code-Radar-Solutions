#include<stdio.h>
void Swap(int a[],int i,int j){
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}
void Sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                Swap(arr,j,j+1);
            }
        }
    }
}

int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    printf("%d",count);


    return 0;

}