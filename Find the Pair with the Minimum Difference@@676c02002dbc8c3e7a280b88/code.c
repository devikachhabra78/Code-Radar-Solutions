#include<stdio.h>
void Sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    return ;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Sort(arr,n);
    int max = arr[0];
    int smax = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i]< max && (smax == -1 || arr[i]>smax)){
            smax = arr[i];
        }
    }
    int diff = max - smax;
    for(int i=0;i<n;i++){
        printf("%d %d",max,smax);
    }
    return 0;
}