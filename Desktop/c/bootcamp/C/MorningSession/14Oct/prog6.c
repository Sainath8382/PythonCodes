/*
    5
   56
  543
 5678
54321
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows? ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
        int num=rows;
    for(int sp=rows;sp>i;sp--){
        printf("  ");
        }
    for(int j=1;j<=i;j++){
        if(i%2!=0){
            printf("%d ",num);
            num--;
            }else{
            printf("%d ",num);
            num++;
            }
        }
        printf("\n");
    }
}
