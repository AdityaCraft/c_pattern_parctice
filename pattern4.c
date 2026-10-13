#include<stdio.h>

int main(){
    int i,j,n,k=15;
    printf("Enter num here ");
    scanf("%d",&n);
    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d",k--);
        }
        printf("\n");
    }

    return 0;
}