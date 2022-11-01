//initialize character array or string in multiple ways and print it
#include<stdio.h>
void main(){
char name[10];
char* name2="Rohit";
char* name3="SHUBMAN";

printf("Enter name: ");
gets(name);
puts(name);

printf("%s\n",name2);
puts(name3);
}
