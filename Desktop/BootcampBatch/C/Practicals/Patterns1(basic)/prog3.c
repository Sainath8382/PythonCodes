/*1111
 *2222
 *3333
 *4444
 */
 #include<stdio.h>
void main(){
int rows,num=1;
printf("ENter rows: ");
scanf("%d",&rows);

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        printf("%d ",num);
        }num++;
         printf("\n");
    }
 }
