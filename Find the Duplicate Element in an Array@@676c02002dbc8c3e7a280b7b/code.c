#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int duplicate = arr[i];
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    printf("%d",duplicate);
    return 0;
}