#include<stdio.h>
void main(){
char name[10];
printf("ENter name: ");
scanf("%[^\n]",name);

printf("%s\n",name);
}
