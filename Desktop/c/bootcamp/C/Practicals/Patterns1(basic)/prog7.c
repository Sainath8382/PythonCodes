/*1  2   9   4
 *25 6   49  8
 *81 10  121 12
 *169 14 225 16
 */
 #include<stdio.h>
 void main(){
 int rows,num=1;
 printf("ENter rows: ");
 scanf("%d",&rows);

 for(int i=1;i<=3;i++){
    for(int j=1;j<=rows;j++){
        if(j%2!=0){
            printf("%d\t",num*num);
            }else if(j%2==0){
            printf("%d\t",num);
            }
            num++;
        }
        printf("\n");
    }
 }
