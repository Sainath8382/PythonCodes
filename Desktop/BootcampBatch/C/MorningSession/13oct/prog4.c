/*
4321
321
21
1
*/

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

int num=rows;
for(int i=1;i<=rows;i++){
    for(int j=rows;j>=i;j--){
        printf("%d ",num);
        num--;
        }
        printf("\n");
        num=num+(rows-i);
    }
}
