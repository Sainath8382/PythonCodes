/*
1  2 3 4
5  6 7
8  9
10
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

int num=1;
for(int i=1;i<=rows;i++){
    for(int j=rows;j>=i;j--){
        printf("%d\t",num);
        num++;
        }
        printf("\n");
    }
}
