#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int max = arr[0];
    int pelement=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            pelement=arr[i];
            break;
        }
        else if(arr[i]>max){
            max = arr[i];
            pelement=max;
        }
        else{
            pelement=-1;
        }
    }
    return 0;
}