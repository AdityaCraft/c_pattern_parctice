#include<stdio.h>

int main(){
    int i,n,a=0,b=1,c=0;
    printf("enter num");
    scanf("%d",&n);
    printf("fabonacci series");
    for(i=1; i<=n ; i++)
    {
        
        c=a+b;
        a=b;
        b=c;
        

        printf("%d" , c);

    }
    return 0;
}