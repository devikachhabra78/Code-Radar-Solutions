#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int evencount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;
        }    
    }
    int oddcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            oddcount++;
        }

    }
    printf("%d %d",evencount,oddcount);
    return 0;
}