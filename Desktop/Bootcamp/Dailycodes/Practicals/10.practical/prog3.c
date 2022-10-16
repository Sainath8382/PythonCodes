/*
3. WAP to add two different arrays of the same size
Take array size and array elements from the user

IP : enter 1st array : 10 12 13 15
Ip : enter 2nd array: 1 2 3 4
Op: 11 14 16 19

*/

#include<stdio.h>
void main(){
int size;
printf("Size of array: ");
scanf("%d",&size);
int arr[size];
int arr1[size];

printf("Enter array elements:\n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
printf("Enter array2 elements:\n");
for(int j=0;j<size;j++){
    scanf("%d",&arr1[j]);
    }

for(int i=0,j=0;i<size,j<size;i++,j++){
    printf("%d\t",(arr[i]+arr1[j]));
    }
}
