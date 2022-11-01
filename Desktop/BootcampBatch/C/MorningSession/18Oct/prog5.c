/*
3
23
123
0123
123
23
3
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);
int num,col;

for(int i=1;i<rows*2;i++){
    if(i<rows){
        col=i;
        num=rows-i;
    }else{
    col=rows*2-i;
    num=i-num;
    }
    for(int j=1;j<=col;j++){
        printf("%d ",num);
        num++;
        }
    printf("\n");
    }
}
