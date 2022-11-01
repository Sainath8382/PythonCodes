/*D4 C3 B2 A1
 *D4 C3 B2 A1
 *D4 C3 B2 A1
 *D4 C3 B2 A1
 */

 #include<stdio.h>
 void main(){
 int rows;
 printf("ENter rows: ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    char c='D';
    int num=4;
    for(int j=1;j<=4;j++){
        printf("%c%d ",c,num);
        c--;
        num--;
        }
        printf("\n");
    }
 }
