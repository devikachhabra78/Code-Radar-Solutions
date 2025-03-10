#include<stdio.h>
int sort(int arr[],int a){
    for(int i=a;i<n-1;i++){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
    return ;

}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            sort(arr,n);
        
        }
    }
     
    return 0;
}