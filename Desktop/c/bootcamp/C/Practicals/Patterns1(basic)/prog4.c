/*A B C
 *D E F
 *G H I
 */

 #include<stdio.h>
 void main(){
int rows;
printf("ENter rows: ");
scanf("%d",&rows);
char c='A';

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%c ",c);
        c++;
        }
        printf("\n");
    }
 }
