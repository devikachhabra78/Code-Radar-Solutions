#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1\n");
        return 0;
    }
    int max = arr[0];
    int smax = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i] = -arr[i];
        }
        else if(arr[i]>max || arr[i]==arr[i+1]){
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