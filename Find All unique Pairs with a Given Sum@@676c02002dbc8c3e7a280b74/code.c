#include<stdio.h>
int sum(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s = s + arr[i];

    }
    return s;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int pairs=0;
    int T=sum(arr,n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==T){
                pairs++;
                printf("%d %d\n",arr[i],arr[j]);
            }
            else if(arr[i]==arr[j]){
                printf("%d %d\n",arr[i],arr[j]);
                break;
            }
        }
    }
    

    return 0;

}