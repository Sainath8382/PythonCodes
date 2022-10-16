/*DDDD
 * CCC
 *  BB
 *   A
 */

  #include<stdio.h>
 void main(){
 int rows;
 printf("Rows? ");
 scanf("%d",&rows);

 int ch=64+rows;
 for(int i=1;i<=rows;i++){
    for(int j=1;j<i;j++){
        printf(" ");
        }
    for(int k=rows;k>=i;k--){
        printf("%c",ch);
        }
        printf("\n");
        ch--;
    }
}
