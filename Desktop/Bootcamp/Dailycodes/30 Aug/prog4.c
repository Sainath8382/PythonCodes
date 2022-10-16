/*
1 4 9
16 25 36
49 64 81
*/
#include<stdio.h>
void main(){
    int n=1;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%d ",n*n);
            n++;
            }
        printf("\n");
    }
}
