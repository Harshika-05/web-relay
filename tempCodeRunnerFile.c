#include<stdio.h>
int main(){
    int n,i,j;
    printf("rows:\n");
    scanf("%d",&n);
    for(i=1;1<=n;i++){
        for(j=1;j<=i;j++){
            int m=j+64;
            printf("%c",m);
        }
        printf("\n");
    }
return 0;
}