#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n],visited[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==1){
            continue;
        }
        int count = 1;
        for(int j=i+1;j<n;j++){
            count++;
            visited[j]=1;
        }
        printf("%d %d",arr[i],count);
    }
    
    return 0;
}