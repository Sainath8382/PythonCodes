/*
A b C
d E f
G h I
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows");
scanf("%d",&rows);

char ch=62+rows;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if((i+j)%2==0){
            printf("%c ",ch);
            }else{
            printf("%c ",ch+32);
            }
            ch++;
        }
        printf("\n");
    }
}
