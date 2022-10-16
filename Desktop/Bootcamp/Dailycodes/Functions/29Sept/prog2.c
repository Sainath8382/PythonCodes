//passing whole array through a function
#include<stdio.h>

void array(int *ptr,int arrsize){
for(int i=0;i<arrsize;i++){
    printf("%d\n",*(ptr+i));    //using pointer
    }
}

void array2(int arr[],int arrsize){
for(int i=0;i<arrsize;i++){
    printf("%d\n",arr[i]);
    }
}

void main(){
int arr[]={10,20,30,40};
int arrsize=sizeof(arr)/sizeof(int);

array(arr,arrsize);
array2(arr,arrsize);
}
