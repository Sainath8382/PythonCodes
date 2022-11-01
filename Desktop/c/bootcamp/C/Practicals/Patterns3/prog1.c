/*1 2 3 4
 *1 3 5 7
 *1 4 7 10
 *1 5 9 13*/

 #include<stdio.h>
 void main(){
 int rows;
 printf("Enter the rows: ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    int num=1;
    for(int j=1;j<=rows;j++){
        if(i==1){
            printf("%d\t",num);
            num+=1;
            }else if(i==2){
            printf("%d\t",num);
            num+=2;
            }else if(i==3){
            printf("%d\t",num);
            num+=3;
            }else if(i==4){
            printf("%d\t",num);
            num+=4;
            }
        }printf("\n");
    }
 }
