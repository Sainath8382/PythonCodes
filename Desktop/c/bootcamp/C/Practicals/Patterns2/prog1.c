/*4321
 *5432
 *6543
 *7654
 */

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);
int num=4;

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%d ",num);
        num--;
        }
        printf("\n");
        num+=5;
    }
}
