/*
1 2 3 4
4 5 6
6 7
7
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

int num=1;
for(int i=1;i<=rows;i++){
    for(int j=rows;j>=i;j--){
        printf("%d ",num);
        num++;
        }
        printf("\n");
        num-=1;
    }
}
