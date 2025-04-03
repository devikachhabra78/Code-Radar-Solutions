#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int maxcount = 0;
    int melement=arr[0];
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            arr[i]=melement;
            count++;
        }

    }
    if(count>=maxcount){
        printf("%d",melement);
    }
    }
    
    return 0;
}