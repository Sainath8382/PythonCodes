/*
111
222
333
*/

#include<stdio.h>
void main(){
int rows;
printf("ENter rows:");
scanf("%d",&rows);
int num=1;

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
            printf("%d ",num);
        }
        printf("\n");
        num++;
    }
}
