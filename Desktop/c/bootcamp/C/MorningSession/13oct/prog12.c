/*
4321
CBA
21
A
*/


#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
    int num=rows-i+1;
    char ch=65+rows-i;
    for(int j=rows;j>=i;j--){
        if(i%2!=0){
            printf("%d ",num);
            num--;
            }else{
            printf("%c ",ch);
            ch--;
            }
        }
        printf("\n");
    }
}
