/*
****
***
**
*
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
    for(int j=rows;j>=i;j--){
        printf("* ");
        }
        printf("\n");
    }
}
