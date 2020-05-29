#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int a,N,i,xor=0;       
        scanf("%d",&N);
        for(i=0;i<N;i++){
            scanf("%d",&a);
            xor^=a;
        }
        if (xor == 0 || N % 2 == 0)
            printf("First\n");
        else
            printf("Second\n");

    }
}