/*WAP take two characters if these characters are equal then print same but if unequal then print the diference*/

#include<stdio.h>
void main(){
char c1,c2;
printf("ENter the first character: \n");
scanf("%c",&c1);
printf("ENter the second character: \n");
scanf(" %c",&c2);

if(c1==c2){
    printf("%c=%c\n",c1,c2);
    }else if(c1>c2){
    printf("The difference is: %d\n",c1-c2);
    }else if(c2>c1){
    printf("The difference is: %d\n",c2,c1);
    }else{
    printf("Wrong input\n");
    }
}
