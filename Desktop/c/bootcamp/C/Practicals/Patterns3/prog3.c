/*4a3b
 *4a3b
 *4a3b
 *4a3b
 */

#include<stdio.h>
void main(){
int rows;
printf("Rows? ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
    int x=4;
    char ch='a';
    for(int j=1;j<=rows;j++){
        if(j%2==0){
            printf("%c ",ch);
            ch++;
            }else{
            printf("%d ",x);
            x--;
            }
        }printf("\n");
    }
}
