/*wap to find if input is alphabet,digit or special character*/

#include<stdio.h>
void main(){
char value;
printf("Enter any value: ");
scanf("%c",&value);

if(value>=97 && value<=122 || value>=65 && value<=90){
    printf("%c is alphabet\n",value);
    }else if(value>=48 && value<=57){
    printf("%c is a digit\n",value);
    }else{
    printf("%c is a special character\n");
    }

}
