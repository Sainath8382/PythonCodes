//array can be inserted into constant string

#include<stdio.h>
void main(){

char arr[10];
printf("Enter string: ");
gets(arr);
puts(arr);

char *str=arr;
puts(str);
}
