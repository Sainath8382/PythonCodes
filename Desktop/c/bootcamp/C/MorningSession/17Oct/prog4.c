/*
1234321
 23432
  343
   4
*/
#include<stdio.h>
void main(){
int rows=4;
for(int i=1;i<=rows;i++){
    for(int sp=1;sp<i;sp++){
        printf("  ");
        }
    int num=i;
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
