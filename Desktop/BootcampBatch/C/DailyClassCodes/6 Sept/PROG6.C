 /*1A2B
  *1A2
  *1A
  *1
  */

 #include<stdio.h>
 int main(){
 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    char ch='A';
    int x=1;

    for(int j=rows;j>=i;j--){
        if(j%2!=0){
            printf("%c ",ch);
            ch++;
            }
        if(j%2==0){
            printf("%d ",x);
            x++;
            }
        }printf("\n");
    }
 }
