/*
1
12
123
1234
123
12
1
*/

#include<stdio.h>
void main(){
int rows,cols;
printf("Rows: ");
scanf("%d",&rows);

for(int i=1;i<rows*2;i++){
    if(i<=rows){
        cols=i;
        }else{
        cols=rows*2-i;
        }
    int num=1;
    for(int j=1;j<=cols;j++){
        printf("%d ",num);
        num++;
        }
    printf("\n");
    }
}
