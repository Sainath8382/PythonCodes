/*3b1d
* a2c0
* 3b1d
* a2c0
*/
#include<stdio.h>
void main(){
int rows;
printf("Rows? ");
scanf("%d",&rows);
for(int i=1;i<=rows;i++){
    int n1=3;
    char ch1='b';
    int n2=2;
    char ch2='a';
    for(int j=1;j<=rows;j++){
        if(i%2!=0){
            if(j%2!=0){
                printf("%d ",n1);
                n1-=2;
                }else{
                printf("%c ",ch1);
                ch1+=2;
                }
            }else{
                if(j%2!=0){
                    printf("%c ",ch2);
                    ch2+=2;
                    }else{
                    printf("%d ",n2);
                    n2-=2;
                    }
            }
        }printf("\n");
    }
}
