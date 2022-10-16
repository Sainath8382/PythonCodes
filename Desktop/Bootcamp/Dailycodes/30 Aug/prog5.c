/*
1 4 9
1 4 9
1 4 9*/

#include<stdio.h>
void main(){

    for(int i=1;i<=3;i++){
        int n=1;
        for(int j=1;j<=3;j++){
        printf("%d ",n*n);
        n++;
        }
        printf("\n");
    }
}
