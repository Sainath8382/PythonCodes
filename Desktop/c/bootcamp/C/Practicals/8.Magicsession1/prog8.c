/*0
 *1 1
 *2 3   5
 *8 13  21  34
 */

#include<stdio.h>
void main(){

int rows;
printf("Rows?: ");
scanf("%d",&rows);
int a=0,b=1,c;

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        //int a=0,b=1,c,n=j;
        if(i>=j){
            printf("%d\t",a);
            c=a+b;
            a=b;
            b=c;
            }
        }printf("\n");
    }
}
