#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            printf("%d\n",arr[i]);
            return 0;
        }
    }
    printf("-1\n");

    return 0;
}