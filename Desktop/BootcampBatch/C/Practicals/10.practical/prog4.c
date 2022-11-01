/*
4. WAP to the array elements in reverse order
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 14
Op: 14 16 15 13 12 10

*/
#include<stdio.h>
void main(){
int size;
printf("ENter array size:\n");
scanf("%d",&size);
int arr[size];

printf("ENter array elements:\n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }

 for(int j=size-1;j>=0;j--){
    printf("%d\n",arr[j]);
    }
}
