#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int majorityelement=-1;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-1]){
            majorityelement = arr[i];
            count++;
        }

    }
    if(count > n/2){
        printf("%d",majorityelement);
    }
   
    return 0;
}