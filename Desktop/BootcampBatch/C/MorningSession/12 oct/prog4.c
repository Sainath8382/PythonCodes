/*
d d d d
c c c c
b b b b
a a a a
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

char ch=96+rows;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%c ",ch);
        }
        printf("\n");
        ch--;
    }
}
