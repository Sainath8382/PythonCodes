/* $=$=
 * $=$=
 * $=$=
 * $=$=
 */

 void main(){
 int rows;
 printf("ENter rows: ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(j%2!=0){
            printf("$ ");
            }else if(j%2==0){
            printf("= ");
            }
        }
        printf("\n");
    }
 }
