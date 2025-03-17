#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int count = 0;
    int melement=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-1]){
            arr[i]=melement;
            count++;
        }

    }
    if(count>=n/2){
        printf("%d",melement);
    }
    
    
    return 0;
}