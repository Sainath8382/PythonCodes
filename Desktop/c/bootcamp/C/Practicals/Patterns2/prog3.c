/*4444
 *3333
 *2222
 *1111
 */

 #include<stdio.h>
 void main(){

 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);
 int num=4;
 for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
    printf("%d ",num);
    }
    printf("\n");
    num--;
    }
}
