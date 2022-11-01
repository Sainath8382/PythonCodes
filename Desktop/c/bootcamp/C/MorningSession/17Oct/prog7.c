/*
4321234
 32123
  212
   1
*/

#include<stdio.h>
void main(){
    int rows;
printf("Rows: ");
scanf("%d",&rows);
int num=rows;

for(int i=1;i<=rows;i++){
    for(int sp=1;sp<i;sp++){
        printf("  ");
        }
    for(int j=1;j<=(rows-i)*2+1;j++){
        if(j<=rows-i){
            printf("%d ",num);
            num--;
            }else{
            printf("%d ",num);
            num++;
            }
        }
        printf("\n");
        num-=2;
    }
}
