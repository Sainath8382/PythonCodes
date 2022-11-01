//array of character pointers
#include<stdio.h>
void main(){
char* arr[3]={"Samir","Max","sam"};

printf("%s\n",*(arr));
printf("%s\n",*(arr+1));
printf("%s\n",*(arr+2));

printf("%p\n",(arr));
printf("%p\n",(arr[1]));
printf("%p\n",(arr[2]));

}
