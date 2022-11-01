/*
4
33
222
1111
222
33
4
*/

#include<stdio.h>
void main(){
int rows,col;
printf("Rows: ");
scanf("%d",&rows);

int num=rows+1;
for(int i=1;i<=rows*2-1;i++){
    if(i<=rows){
        col=i;
        num--;
        }else{
        col=rows*2-i;
        num++;
        }
    for(int j=1;j<=col;j++){
        printf("%d ",num);
        }
        printf("\n");
    }
}
