//wap to allocate memory of float take value from user and print i using malloc

#include<stdio.h>
#include<stdlib.h>
void main(){
float x;
printf("ENter float value: ");
scanf("%f",&x);

float *ptr=(float*)malloc(sizeof(float));
*ptr=x;

printf("%f\n",*ptr);
}
