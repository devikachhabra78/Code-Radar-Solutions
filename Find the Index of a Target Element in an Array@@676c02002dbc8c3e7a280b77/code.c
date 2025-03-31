#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(innt i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==T){
            index = i;
            break;
        }
    }
    printf("%d",index);

    return 0;
}