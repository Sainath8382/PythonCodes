/*
abcd
abc
ab
a
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);


for(int i=1;i<=rows;i++){
    char ch=97;
    for(int j=rows;j>=i;j--){
        printf("%c ",ch);
        ch++;
        }
        printf("\n");
    }
}
