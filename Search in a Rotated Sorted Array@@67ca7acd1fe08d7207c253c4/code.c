#include<stdio.h>
int searchInRotatedArray(int arr[],int n, int target){
    for(int i=0;i<n-1;i++){
        if(arr[i]==target){
            return i;
        }
    
    }
    return -1;
}