/*    1
 *   12
 *  123
 * 1234
 */

  #include<stdio.h>
 void main(){
 int rows;
 printf("Rows? ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    int num=1;
    for(int j=rows;j>i;j--){
        printf(" ");
        }
    for(int k=1;k<=i;k++){
        printf("%d",num);
        num++;
        }
        printf("\n");
    }
}
