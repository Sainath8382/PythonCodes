/*
1234567
 12345
  123
   1
*/

#include<stdio.h>
void main(){
    int rows;
printf("Rows: ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
int num=1;
    for(int sp=1;sp<i;sp++){
        printf("  ");
        }
    for(int j=1;j<=(rows-i)*2+1;j++){
        printf("%d ",num);
        num++;
        }
    printf("\n");
    }
}
