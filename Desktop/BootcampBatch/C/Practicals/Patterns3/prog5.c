/*
*1  4   3
*16 5   36
*7  64  9
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows? ");
scanf("%d",&rows);
int num=1;

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(num%2!=0){
            printf("%d\t",num);
            num++;
            }else{
            printf("%d\t",num*num);
            num++;
            }
        }printf("\n");
    }
}
