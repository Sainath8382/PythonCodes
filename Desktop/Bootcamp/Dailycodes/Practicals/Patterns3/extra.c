#include<stdio.h>
void main(){
int rows;
printf("Enter rows: ");
scanf("%d",&rows);

int num=rows*rows;
int ch=64+num;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(i%2!=0){
            printf("%d ",num);
            }else{
            printf("%c ",ch);
            }
            num--;
            ch--;
        }
        printf("\n");
    }

}
