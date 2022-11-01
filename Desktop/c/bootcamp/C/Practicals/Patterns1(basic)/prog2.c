/*123
 *abc
 *123
 *abc
 */

 #include<stdio.h>
 void main(){
 int rows;
 printf("ENter rows: ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    char c='a';
    int num=1;
    for(int j=1;j<=3;j++){
        if(i%2!=0){
            printf("%d ",num);
            num++;
            }else if(i%2==0){
            printf("%c ",c);
            c++;
            }
        }printf("\n");
    }
 }
