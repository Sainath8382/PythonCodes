/*
0   1   1   2
3   5   8   13
21  34  55  89
144 233 377 610
*/

#include<stdio.h>
void main(){
int rows;
printf("Enter rows: ");
scanf("%d",&rows);
int a=0,b=1,c;

for(int i=1;i<=rows;i++){
        for(int k=1;k<=rows;k++){
                printf("%d\t",a);
                c=a+b;
                a=b;
                b=c;
            }
        printf("\n");
    }
}
