#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n] ;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=n-1;i>0;i--){
        result = arr[i];
        return result;
    }
    if(arr[n] == result){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}