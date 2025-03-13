#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int diff=INT_MIN;
    if(n<2){
        return -1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j]==diff){
            
                break;
            }
        }
        printf("%d %d",arr[i],arr[j]);
        
    }
    return 0;
}