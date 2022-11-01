/*
4321
432
43
4
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
    int num=rows;
    for(int j=rows;j>=i;j--){
        printf("%d ",num);
        num--;
        }
        printf("\n");
    }
}
