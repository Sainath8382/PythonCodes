/*D e F g
 *e D c B
 *F g H i
 *g F e D
 */
#include<stdio.h>
void main(){
int rows;
printf("Enter Rows: ");
scanf("%d",&rows);
//char ch1='D';
//char ch2='e';

for(int i=1;i<=rows;i++){
        int ch1=64+rows;
        int ch2=97+rows;
    for(int j=1;j<=rows;j++){
        if(i%2!=0){
            if(j%2!=0){
                printf("%c ",ch1);
                ch1+=2;
                }else{
                printf("%c ",ch2);
                ch2+=2;
                }
            }else{
                if(j%2!=0){
                    printf("%c ",ch2);
                    ch2-=2;
                    }else{
                    printf("%c ",ch1);
                    ch1-=2;
                    }
                }
    }
            printf("\n");
            }
    }
