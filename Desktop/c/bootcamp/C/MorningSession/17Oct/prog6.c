/*
1234321
 12321
  121
   1
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
    int num=1;
    for(int j=1;j<=(rows-i)*2+1;j++){
        if(j<=rows-i){
        printf("%d ",num);
        num++;
        }else{
        printf("%d ",num);
        num--;
        }
    }
    printf("\n");
}
}
