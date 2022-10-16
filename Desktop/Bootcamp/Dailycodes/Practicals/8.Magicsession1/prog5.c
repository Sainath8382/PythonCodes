/*2   3   5
  7   11  13
  17   19 23
  */

#include<stdio.h>
void main(){
int rows;
printf("Enter rows\n: ");
scanf("%d",&rows);

int num=2;

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;){
        int count=0;
        for(int k=1;k<=num;k++){
            if(num%k==0){
                count++;
                }
            }
            if(count==2){
                printf("%d\t",num);
                j++;
                }
                num++;

        }printf("\n");
    }
}
