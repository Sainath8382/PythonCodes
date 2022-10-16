//array of character pointers
#include<stdio.h>
#include<string.h>

void main(){
char* arr1[3]={"Ashish","Rohit","Ashish"};

printf("%p\n",arr1[0]);
printf("%p\n",arr1[1]);
printf("%p\n",arr1[2]);

puts(arr1[0]);
printf("%s\n",arr1[2]);
//strcpy(arr1[2],"Rohit");  //segmentation fault

puts(arr1[0]);
}
