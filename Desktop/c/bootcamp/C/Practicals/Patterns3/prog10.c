/*DCBA
 *efgh
 *FEDC
 *ghij
 */

#include<stdio.h>
void main(){
int rows;
printf("Rows: ");
scanf("%d",&rows);

//int ch1=64+rows;
//int ch2=97+rows;
for(int i=1;i<=rows;i++){
        int ch1=64+rows;
int ch2=97+rows;
    for(int j=1;j<=rows;j++){
        if(i%2!=0){
            printf("%c ",ch1);
            ch1--;
            }else{
            printf("%c ",ch2);
            ch2++;
            }
        }
        ch1+=6;
        ch2+=2;
        printf("\n");
    }
}
