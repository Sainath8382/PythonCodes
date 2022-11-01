/*
1 2 3 4
a b c d
# # # #
5 6 7 8
e f g h
# # # #
*/

#include<stdio.h>
void main(){
int rows,cols;
printf("Enter rows and cols: ");
scanf("%d%d",&rows,&cols);

int num=1;
char ch='a';
for(int i=1;i<=rows;i++){
    for(int j=1;j<=cols;j++){
        if(i%3==1){
            printf("%d ",num);
            num++;
            }else if(i%3==2){
            printf("%c ",ch);
            ch++;
            }else{
            printf("# ");
            }
        }
        printf("\n");
    }
}
