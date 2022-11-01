/*
1 2 3 4
a b c d
5 6 7 8
e f g h
*/

#include<stdio.h>
void main(){
int rows;
printf("ENter rows:");
scanf("%d",&rows);
int n=1;
int ch=97;

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(i%2==0){
            printf("%c ",ch);
            ch++;
            }
        else{
            printf("%d ",n);
            n++;
            }
        }
        printf("\n");
    }
}
