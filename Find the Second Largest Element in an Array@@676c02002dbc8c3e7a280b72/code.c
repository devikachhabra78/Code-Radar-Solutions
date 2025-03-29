#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    int smax = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i] = -arr[i];
        }
        else if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax = arr[i];
        }
        

    }
    printf("%d",smax);
    
    return 0;
}