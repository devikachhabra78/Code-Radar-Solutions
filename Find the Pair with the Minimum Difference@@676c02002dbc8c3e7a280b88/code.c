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
    int num1,num2;
    if(n<2){
        return -1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j]==diff){
                num1= arr[i];
                num2= arr[j];
                break;
            }
        
        }
        printf("%d %d",num1,num2);
        
        
    }
    return 0;
}