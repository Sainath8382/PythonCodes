/*
a b c
d e f
g h i
*/

#include<stdio.h>
void main(){
int rows;
printf("ENter rows:");
scanf("%d",&rows);

int ch=97;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%c ",ch);
        ch++;
        }
        printf("\n");
    }
}
