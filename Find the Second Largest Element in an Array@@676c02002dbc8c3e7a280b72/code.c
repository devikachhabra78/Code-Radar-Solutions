#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1\n");
        return 0;
    }
    int max = arr[0];
    int smax = -1;
    for(int i=0;i<n;i++){

        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i]<max && (smax == -1 || arr[i]>smax)){
            smax = arr[i];
        }
        

    }
    if(smax == -1) printf("-1\n");
    else printf("%d",smax);
    
    return 0;
}