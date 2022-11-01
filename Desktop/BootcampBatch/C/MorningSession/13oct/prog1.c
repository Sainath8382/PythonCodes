/*
1234
123
12
1
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
    int num=1;
    for(int j=rows;j>=i;j--){
        printf("%d ",num);
        num++;
        }
        printf("\n");
    }
}
