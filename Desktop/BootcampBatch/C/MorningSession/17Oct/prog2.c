/*
1 2 3 4 5
  6 7 8
    9
*/

#include<stdio.h>
void main(){
    int rows;
printf("Rows: ");
scanf("%d",&rows);
int num=1;

for(int i=1;i<=rows;i++){
    for(int sp=1;sp<i;sp++){
        printf(" \t");
        }
    for(int j=1;j<=(rows-i)*2+1;j++){
        printf("%d\t",num);
        num++;
        }
        printf("\n");
}
}
