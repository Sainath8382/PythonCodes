//wap to allocate memory for salary n friends using calloc

#include<stdio.h>
#include<stdlib.h>
void main(){

int num;
printf("Enter size: ");
scanf("%d",&num);

float *sal=(float*)calloc(5,sizeof(float));

printf("ENter your salaries:\n");
for(int i=0;i<num;i++){
    scanf("%f",*(sal+i));
    }

for(int i=0;i<num;i++){
    printf("%f",*(sal+i));
    }
}
