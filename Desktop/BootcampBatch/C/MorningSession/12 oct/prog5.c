/*
a B c
d E f
g H i
*/
#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

char ch=94+rows;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(j%2==0){
            printf("%c ",ch-32);
            }else{
            printf("%c ",ch);
            }
        ch++;
        }
        printf("\n");
    }
}
