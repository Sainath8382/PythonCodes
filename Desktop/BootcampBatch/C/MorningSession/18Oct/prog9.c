/*
1
2   4
3   6   9
4   8   12  16
3   6   9
2   4
1
*/

#include<stdio.h>
void main(){
int rows,cols,num;

printf("Enter rows: ");
scanf("%d",&rows);

for(int i=1;i<rows*2;i++){
    if(i<=rows){
        cols=i;
        num=i;
    }else{
    cols=rows*2-i;
    num=cols;
    }
    for(int j=1;j<=cols;j++){
        printf("%d ",num);
        num+=cols;
        }
    printf("\n");
    }
}
