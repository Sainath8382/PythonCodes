#include<stdio.h>

int arrsum(int *ptr,int arrsize){
int sum=0;
for(int i=0;i<arrsize;i++){
    sum=sum+*(ptr+i);
    }
    return sum;
}

void main(){
int arr[]={10,20,30,40,50};
int arrsize=sizeof(arr)/sizeof(int);

int sum=arrsum(arr,arrsize);
printf("add=%d\n",sum);
}
