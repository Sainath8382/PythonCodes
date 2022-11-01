/*
A A A
B B B
C C C
*/

#include<stdio.h>
void main(){
int rows;
printf("ENter rows:");
scanf("%d",&rows);

int ch=65;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%c ",ch);
        }
        printf("\n");
        ch++;
    }
}
