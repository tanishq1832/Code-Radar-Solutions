#include <stdio.h>
int main(){
    int n,i,j;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
