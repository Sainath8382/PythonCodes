/*
9 8 7
6 5 4
3 2 1
*/

#include<stdio.h>
void main(){
int rows;
printf("ENter rows:");
scanf("%d",&rows);

int num=rows*rows;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%d ",num);
        num--;
        }
        printf("\n");
    }
}
