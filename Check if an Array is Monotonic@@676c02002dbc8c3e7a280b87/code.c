#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mono=1;
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1] || arr[i]>=arr[i+1]){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(mono==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
