/*DCBA
 *edcb
 *FEDC
 *gfed
 */

  #include<stdio.h>
 void main(){
 int rows;
 printf("Enterr rows: ");
 scanf("%d",&rows);
 char ch1='D';

 for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(rows%2==0){
         printf("%c ",ch1+32);
         ch1--;
        }else{
            printf("%c ",ch1-32);
            ch1--;
        }
    }
    //ch1+=3;
    printf("\n");
    }

    }
