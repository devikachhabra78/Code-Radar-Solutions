#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count ++;
            }
            else{
            count = 1;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d %d\n",arr[i],count);
    }

    return 0;

}