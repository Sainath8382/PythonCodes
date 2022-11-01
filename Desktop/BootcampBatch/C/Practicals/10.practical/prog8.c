#include<stdio.h>
void main(){
char arr[]={'A','B','C','D','E'};
char *ptr=&arr[2];
(*ptr)++;
ptr=ptr+2;

printf("%c\n",*ptr);

for(int i=0;i<5;i++){
    printf("%c\n",arr[i]);
    }
}
