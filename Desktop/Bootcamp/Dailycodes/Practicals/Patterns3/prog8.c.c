/*16    15  14  13
   L    K    J   I
   8    7   6   5
   D    C   B   A
*/

#include<stdio.h>
void main(){
int rows;
printf("Enter rows: ");
scanf("%d",&rows);

int num=rows*rows;
int ch=64+num;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(i%2!=0){
            printf("%d\t",num);
            }else{
            printf("%c\t",ch);
            }
            num--;
            ch--;
        }
        printf("\n");
    }

}
