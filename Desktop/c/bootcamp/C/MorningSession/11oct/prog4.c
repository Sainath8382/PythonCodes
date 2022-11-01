/*
1   2   3   4
5   6   7   8
9   10  11  12
*/

#include<stdio.h>
void main(){
int rows;
printf("ENter rows:");
scanf("%d",&rows);

int num=1;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%d\t",num);
        num++;
        }
        printf("\n");
    }
}
