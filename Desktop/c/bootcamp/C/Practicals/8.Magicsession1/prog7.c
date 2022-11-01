/* EDCBA
 * EDCB
 * EDC
 * ED
 * E
 */

  #include<stdio.h>
 void main(){
 int rows;
 printf("Rows? ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    int ch=64+rows;
    for(int j=rows;j>=i;j--){
        printf("%c ",ch);
        ch--;
        }
        printf("\n");
    }
}
