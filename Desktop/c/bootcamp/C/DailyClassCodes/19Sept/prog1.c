#include<stdio.h>
void main(){
int size;
printf("ENter array size: ");
scanf("%d",&size);

int arr[size];
printf("Array elements:\n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }

for(int i=0;i<size;i++){
    //printf("%d\n",arr[i]);
    printf("%d\n",*(arr+i));    //internal representation
    }
}
