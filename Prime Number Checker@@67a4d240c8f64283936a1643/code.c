#include<stdio.h>
int is_prime(int t){
    if(t<=1){
        return 0;
    }
    else{
        for(int i=2;i*i<=t;i++){
            if(t%i==0){
                return 0;
            }
        }
    }
    else{
        return 1;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int num;
        scanf("%d",&num);
        printf("%d\n",is_prime(num));
       
        if(is_prime(t)){
            return 0;
        }
        else{
            return 1;
        }
       
    }

    return 0;
}