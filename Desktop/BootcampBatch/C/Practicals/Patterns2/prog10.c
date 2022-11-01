/*D4 C3 B2 A1
 *A1 B2 C3 D4
 *D4 C3 B2 A1
 *A1 B2 C3 D4
 */

  #include<stdio.h>
 void main(){

 int rows;
 printf("Enter rows: ");
 scanf("%d",&rows);

 //int ch1=68,ch2=65,n1=4,n2=1;
 for(int i=1;i<=rows;i++){
        int ch1=68,ch2=65,n1=4,n2=1;
    for(int j=1;j<=rows;j++){
        if(i%2!=0){
            printf("%c%d ",ch1,n1);
            ch1--;
            n1--;
            }else if(i%2==0){
            printf("%c%d ",ch2,n2);
            ch2++;
            n2++;
            }
        }printf("\n");
    }
 }
