/*
*
***
*****
***
*
*/
#include<stdio.h>
void main(){
int rows,cols;
int temp=1;

printf("Enter rows: ");
scanf("%d",&rows);

for(int i=1;i<rows*2;i++){
    if(i<=rows){
        cols=i*2-1;
    }else{

        cols=i-temp;
        temp+=rows;
    }
    for(int j=1;j<=cols;j++){
        printf("* ");
        }
    printf("\n");
    }
}
