/*
1. WAP to find the given element from the array
Take array size and array elements from the user

IP : enter array : 10 12 13 15 16 14
Ip : enter element : 15
Op: 15 is present
*/

#include<stdio.h>
void main(){
int size;
printf("Array size: ");
scanf("%d",&size);

int arr[size];
printf("ENter elements:\n");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }

int num,flag=0;

printf("ENter the num: ");
scanf("%d",&num);
for(int i=0;i<5;i++){
    if(arr[i]==num){
        flag=1;
        break;
        }
    }

if(flag==1){
    printf("%d is present\n",num);
    }else{
    printf("%d is not present\n",num);
    }
}
