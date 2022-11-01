/*
dddd
CCC
bb
A
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);
char ch=96+rows;

for(int i=1;i<=rows;i++){
    for(int j=rows;j>=i;j--){
        if(i%2==0){
            printf("%c ",ch-32);
            }else{
            printf("%c ",ch);
            }

        }
        ch--;
        printf("\n");
    }
}
