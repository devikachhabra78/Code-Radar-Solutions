#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int smax = arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(max > arr[i]){
                max = arr[i];
            }
        for(int i=0;i<n;i++){
            if(smax < max){
                smax = max;
                max = arr[i];
            }
            else if(smax > arr[i] && max != arr[i]){
                smax = arr[i];
            }

        }
        
            
        }
    }
    printf("%d",smax);
    return 0;
}