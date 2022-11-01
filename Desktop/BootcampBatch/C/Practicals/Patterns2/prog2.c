/* 321
 *cba
 *321
 *cba
 */

 #include<stdio.h>
 void main(){

 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    int num=3;
    char ch='c';
    for(int j=1;j<=3;j++){
        if(i%2!=0){
            printf("%d ",num);
            num--;
            }else if(i%2==0){
            printf("%c ",ch);
            ch--;
            }
        }printf("\n");
    }
 }
