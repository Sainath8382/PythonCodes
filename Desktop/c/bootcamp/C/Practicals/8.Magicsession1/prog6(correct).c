/*D e F g
 *e D c B
 *F g H i
 *g F e D
 */

 #include<stdio.h>
 void main(){
 int rows;
 printf("Rows ");
 scanf("%d",&rows);

 for(int i=1;i<=rows;i++){
        char ch=62+rows+i;
    for(int j=1;j<=rows;j++){
        if(i%2==0){
            if((i+j)%2==0){
                printf("%c ",ch+i-j);
                }else{
                printf("%c ",ch+i-j+32);
                }
            }else{
                if((i+j)%2==0){
                    printf("%c ",ch+j);
                    }else{
                    printf("%c ",ch+j+32);
                    }
            }
        }printf("\n");
    }
 }
