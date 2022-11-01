/*
*******
 *****
  ***
   *
*/
#include<stdio.h>
void main(){
    int rows;
printf("Rows: ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
    for(int sp=1;sp<i;sp++){
        printf("  ");
        }
    for(int j=1;j<=(rows-i)*2+1;j++){
        printf("* ");
        }
        printf("\n");
    }
}
