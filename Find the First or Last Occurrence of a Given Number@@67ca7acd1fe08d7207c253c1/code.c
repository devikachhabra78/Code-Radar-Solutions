#include<stdio.h>
int findOccurrence(int arr[],int n,int target,int mode){
    int *F=-1;
    int *L=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==target){
            if(mode == F){
                *F=i;

            }
            *L=i;
            
        }
    }
}