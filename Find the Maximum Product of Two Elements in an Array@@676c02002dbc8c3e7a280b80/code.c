#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int smax = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i]<max && (smax == -1 || arr[i]>smax)){
            smax = arr[i];
        }
    }
    int product = max * smax;
    printf("%d",product);
    return 0;
}